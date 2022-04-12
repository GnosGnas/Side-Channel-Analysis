
inp_file=aes_test_mine.bsv
inp_file_mod=mkAesTest
synth_file=mkAES_synthesized.v
txt_file=module_inputs.txt
dumpfile=dump
fixed_plaintext=5af3da146f8bd15b82e84a68f7fdec2d
n_inputs=4
line1=15
line2=16
line_synth=62126
#key_const=256'ha;

if [ -f "$txt_file" ] ; then \
	echo "txt_file being removed"
	rm "$txt_file" ; \
fi;

if [ ! -f "mkTOP.v" ]; then \
	echo "mkTOP.v being created"
	echo "module mkTOP;
  reg clk, rst;

  initial begin
    clk = 1'b0;
    rst = ~('BSV_RESET_VALUE);
  end

  always #5 clk <= ~clk;

  $inp_file_mod M (clk, rst);
endmodule" > mkTOP.v ; \
fi;

python3 aes_generate.py $txt_file ${fixed_plaintext} $n_inputs

i=1
while read line; do
	line_read=( $line )
	echo "${line_read[0]}   ${line_read[1]}"
	sed -i "$line1 s/.*/Bit#(128) plaintext_const = 128'h${line_read[0]};/" $inp_file
	sed -i "$line2 s/.*/Bit#(256) key_const = 256'h${line_read[1]};/" $inp_file
	sed -i "$line_synth s/.*/	\$\dumpfile(\\\"\mkAES$i.vcd\")\;/" $synth_file
	make test
	iverilog mkTOP.v ${inp_file_mod}.v $synth_file
	./a.out
	mv "mkAES$i.vcd" vcd_files/
	i=$((i+1))
done < $txt_file





