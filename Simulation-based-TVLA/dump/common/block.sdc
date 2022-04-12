create_clock -name CLK -period 0 -waveform {0 0} [get_ports CLK]

set_input_delay  0 -clock CLK [all_inputs]

set_output_delay 0  -clock CLK [all_outputs]

set_clock_uncertainty 0 CLK
