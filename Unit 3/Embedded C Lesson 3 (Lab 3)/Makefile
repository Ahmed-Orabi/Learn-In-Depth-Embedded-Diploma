CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m4 -mthumb -gdwarf-2 -g
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
As=$(wildcard *.s)
AsOBJ=$(As:.s=.o)	
Project_name=Orabi_Cortex_M4

all: $(Project_name).hex
	@echo "Build is Done :)"
%.o: %.s
	$(CC)as.exe $(CFLAGS) $(INCS) $< -o $@

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

$(Project_name).elf:$(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_out.map 
	cp $(Project_name).elf $(Project_name).axf

$(Project_name).hex: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.hex 
	@echo "Clean Finished!!"

clean:
	rm *.elf *.hex 