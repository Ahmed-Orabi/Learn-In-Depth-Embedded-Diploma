MEMORY
{
	flash(rx) : ORIGIN = 0x08000000 , LENGTH = 128K
	sram(rwx) : ORIGIN = 0x20000000 , LENGTH = 20k
}

SECTIONS
{
	.text : {
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_text = .;
	}> flash

    .data : {
    	_S_data = .;
    	*(.data)
    	_E_data = .;
    }> sram AT> flash

	.bss : {
		_S_bss = .;
		*(.bss*)
		. = ALIGN(4);
		_E_bss = .;


		. = ALIGN(4);
		. = . + 0x1000;
		_stack_top = .;
	}> sram
}