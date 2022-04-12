module jc2_top (left, right, stop, clk, q) ;

//Inputs
input left ;	//Active-low switch #3 (left)
input right ;	//Active-low switch #0 (right)
input stop ;	//Active-low switch #2
input clk ;	//GCK1 on XC9572XL CPLD

//Outputs
output [3:0] q;	//Active-low LEDs

reg [3:0] q;
reg dir, run;

initial
 begin
    q[3:0] = 4'b0000;
    dir = "0";
    run = "0";
 end

always @ ( posedge clk ) begin		//clk rising edge

//dir register:
   if (!right)
      dir=0;
   else if (!left)
      dir=1;
   else 
      dir=dir;
      
//run register:
   if (!stop)
      run=0;
   else if (!left || !right)
      run=1;
   else
      run=run;
      
//Counter section:
   if(run) begin
      if(dir) begin
         q[3:1] = q[2:0];	//Shift lower bits (Left Shift)
         q[0]=!q[3];		//Circulate inverted MSB to LSB
      end
      else begin
         q[2:0] = q[3:1];	//Shift upper bits (Right Shift)
         q[3] = !q[0];		//Circulate inverted LSB to MSB
      end
   end
   
end

endmodule 
