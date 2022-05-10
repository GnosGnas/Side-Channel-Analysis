xlen ?= 64
linesize=$$(($(xlen)/8))
target ?= SHAKTI
iterations ?= 10000
march ?= imfd
RISCV_PREFIX ?= riscv$(xlen)-unknown-elf-
RISCV_GCC ?= $(RISCV_PREFIX)gcc
RISCV_LINK_OPTS ?= -static -nostartfiles -lgcc -T ./common/link.ld
RISCV_HEX = elf2hex $(linesize) 32768
RISCV_OBJDUMP ?= $(RISCV_PREFIX)objdump -D
OUTDIR ?= output

.PHONY: dhrystone
dhrystone: 
	@echo "Compiling Dhrystone"
	@mkdir -p output/
	$(RISCV_GCC) -I./common -I./dhrystone -DCONFIG_RISCV64=True \
				-DITERATIONS=$(iterations) -D$(target)=True -mcmodel=medany -static -std=gnu99 -O2 -ffast-math \
				-fno-common -fno-builtin-printf -march=rv$(xlen)$(march) -w -static \
				-nostartfiles -lgcc -T ./common/link.ld -o $(OUTDIR)/dhry.riscv ./dhrystone/dhry_1.c \
				./dhrystone/dhry_2.c ./common/syscalls.c ./common/crt.S
	@$(RISCV_OBJDUMP) $(OUTDIR)/dhry.riscv > $(OUTDIR)/dhry.dump
	@$(RISCV_HEX) $(OUTDIR)/dhry.riscv 2147483648 > $(OUTDIR)/code.mem


.PHONY: hello-shakti
hello-shakti:
	@echo "Compiling Hello-Shakti"
	@mkdir -p output/
	$(RISCV_GCC) -I./common -I./hello-shakti -DCONFIG_RISCV64=True \
				-DITERATIONS=$(iterations) -D$(target)=True -mcmodel=medany -static -std=gnu99 -O2 -ffast-math \
				-fno-common -fno-builtin-printf -march=rv$(xlen)$(march) -w -static \
				-nostartfiles -lgcc -T ./common/link.ld -o $(OUTDIR)/hello.riscv ./hello-shakti/hello.c \
				./common/syscalls.c ./common/crt.S
	@$(RISCV_OBJDUMP) $(OUTDIR)/hello.riscv > $(OUTDIR)/hello.dump
	@$(RISCV_HEX) $(OUTDIR)/hello.riscv 2147483648 > $(OUTDIR)/code.mem

.PHONY: dma
dma:
	@echo "Compiling DMA"
	@mkdir -p output/
	$(RISCV_GCC) -I./common -I./dma -DCONFIG_RISCV64=True \
				-DITERATIONS=$(iterations) -D$(target)=True -mcmodel=medany -static -std=gnu99 -O2 -ffast-math \
				-fno-common -fno-builtin-printf -march=rv$(xlen)$(march) -w -static \
				-nostartfiles -lgcc -T ./common/link.ld -o $(OUTDIR)/dma.riscv ./dma/dma.c \
				./common/syscalls.c ./common/crt.S
	@$(RISCV_OBJDUMP) $(OUTDIR)/dma.riscv > $(OUTDIR)/dma.dump
	@$(RISCV_HEX) $(OUTDIR)/dma.riscv 2147483648 > $(OUTDIR)/code.mem

.PHONY: rsa_mme
rsa_mme:
	@echo "Compiling RSA-MME"
	@mkdir -p output/
	$(RISCV_GCC) -I./common -I./rsa_mme -DCONFIG_RISCV64=True \
				-DITERATIONS=$(iterations) -D$(target)=True -mcmodel=medany -static -std=gnu99 -O2 -ffast-math \
				-fno-common -fno-builtin-printf -march=rv$(xlen)$(march) -w -static \
				-nostartfiles -lgcc -T ./common/link.ld -o $(OUTDIR)/rsa_mme.riscv ./rsa_mme/rsa_mme.c \
				./common/syscalls.c ./common/crt.S
	@$(RISCV_OBJDUMP) $(OUTDIR)/rsa_mme.riscv > $(OUTDIR)/rsa_mme.dump
	@$(RISCV_HEX) $(OUTDIR)/rsa_mme.riscv 2147483648 > $(OUTDIR)/code.mem

.PHONY: sha_driver
sha_driver:
	@echo "Compiling SHA-DRIVER"
	@mkdir -p output/
	$(RISCV_GCC) -I./common -I./sha_driver -DCONFIG_RISCV64=True \
				-DITERATIONS=$(iterations) -D$(target)=True -mcmodel=medany -static -std=gnu99 -O2 -ffast-math \
				-fno-common -fno-builtin-printf -march=rv$(xlen)$(march) -w -static \
				-nostartfiles -lgcc -T ./common/link.ld -o $(OUTDIR)/sha_driver.riscv ./sha_driver/sha_driver.c \
				./common/syscalls.c ./common/crt.S
	@$(RISCV_OBJDUMP) $(OUTDIR)/sha_driver.riscv > $(OUTDIR)/sha_driver.dump
	@$(RISCV_HEX) $(OUTDIR)/sha_driver.riscv 2147483648 > $(OUTDIR)/code.mem

.PHONY: rsa2048_driver
rsa2048_driver:
	@echo "Compiling RSA-DRIVER"
	@mkdir -p output/
	$(RISCV_GCC) -I./common -I./rsa2048_driver -DCONFIG_RISCV64=True \
				-DITERATIONS=$(iterations) -D$(target)=True -mcmodel=medany -static -std=gnu99 -O2 -ffast-math \
				-fno-common -fno-builtin-printf -march=rv$(xlen)$(march) -w -static \
				-nostartfiles -lgcc -T ./common/link.ld -o $(OUTDIR)/rsa2048_driver.riscv ./rsa2048_driver/rsa2048_driver.c \
				./common/syscalls.c ./common/crt.S
	@$(RISCV_OBJDUMP) $(OUTDIR)/rsa2048_driver.riscv > $(OUTDIR)/rsa2048_driver.dump
	@$(RISCV_HEX) $(OUTDIR)/rsa2048_driver.riscv 2147483648 > $(OUTDIR)/code.mem

.PHONY: clean
clean:
	rm -rf $(OUTDIR)
