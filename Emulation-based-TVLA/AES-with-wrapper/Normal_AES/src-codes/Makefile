## Makefile for Normal-AES modules
## Author: Surya Prasad S (EE19B121)

# Variables for details related to the files
## For S-box1 use SBOX:=sbox1 and for S-box2 use SBOX:=sbox2
## When SBOX is changed do make run_all else the submodules' binary files won't be updated with the required S-box
TOP_MODULE    := mkAES_Wrapper2
TOP_FILE      := aes_wrapper.bsv
BSV_BUILD     := bsv_build
VERILOG_FILES := verilog_files
EXE			  := a.out
SBOX		  := sbox2

# Setting the commands for compiling bluespec
BSC_COMPILE_OPTS := -steps-warn-interval 4000000 -no-warn-action-shadowing -D $(SBOX) -D $(TOP_MODULE) +RTS -K200M -RTS
BSC_CMD          := bsc -vdir $(VERILOG_FILES) -bdir $(BSV_BUILD)  $(BSC_COMPILE_OPTS) -verilog
BSC_SIM          := bsc -o $(EXE) -e 


run: check $(BSV_BUILD)/aes.bo
	@echo "To do full compilation from scratch run make run_all"
	@echo "Compiling and executing $(TOP_FILE) ..."
	@$(BSC_CMD) $(TOP_FILE)
	@cd $(VERILOG_FILES) && $(BSC_SIM) $(TOP_MODULE) $(TOP_MODULE).v
	@mv $(VERILOG_FILES)/$(EXE) .
	./$(EXE)

check:
	@type bsc >/dev/null 2>&1 && ([ $$? -eq 0 ]) || { echo "BlueSpec Compiler not found!! Please refer to Makefile at https://github.com/GnosGnas/Bluespec for installing it"; exit 1; }

run_all: clean run

$(BSV_BUILD)/aes.bo: $(BSV_BUILD)/KeyGen.bo $(BSV_BUILD)/gen_round.bo
	@echo "Compiling aes.bsv ..."
	@$(BSC_CMD) aes.bsv 

$(BSV_BUILD)/KeyGen.bo: $(BSV_BUILD)/rcon_gen.bo $(BSV_BUILD)/$(SBOX).bo
	@echo "Compiling KeyGen.bsv ..."
	@$(BSC_CMD) KeyGen.bsv

$(BSV_BUILD)/gen_round.bo: $(BSV_BUILD)/col_shift.bo $(BSV_BUILD)/invMixCols.bo $(BSV_BUILD)/$(SBOX).bo
	@echo "Compiling gen_round.bsv ..."
	@$(BSC_CMD) gen_round.bsv

$(BSV_BUILD)/col_shift.bo: $(BSV_BUILD)/colByteMix.bo
	@echo "Compiling col_shift.bsv ..."
	@$(BSC_CMD) col_shift.bsv

$(BSV_BUILD)/$(SBOX).bo: $(SBOX).bsv
	@echo "Compiling" $< " ..."
	@$(BSC_CMD) $<
	
$(BSV_BUILD)/%.bo: %.bsv
	@echo "Compiling" $< " ..."
	@$(BSC_CMD) $<

clean:
	@echo "removing verilog and binary files"
	@rm -f $(VERILOG_FILES)/*.v $(BSV_BUILD)/*.bo $(EXE)
