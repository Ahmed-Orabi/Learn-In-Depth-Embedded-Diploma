#include <stdint.h>

#define Stack_Start_sp 0x20001000
extern void main(void);

void Reset_Handler(void);

void Defualt_Handler()
{
	Reset_Handler();
}

extern unsigned int _stack_top;
extern unsigned int _E_text;
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss;
extern unsigned int _E_bss;

void NMI_Handler(void)__attribute__((weak, alias("Defualt_Handler")));;
void H_Fault_Handler(void)__attribute__((weak, alias("Defualt_Handler")));;
void MM_Fault_Handler(void)__attribute__((weak, alias("Defualt_Handler")));;
void Bus_Fault(void)__attribute__((weak, alias("Defualt_Handler")));;
void Usage_Fault(void)__attribute__((weak, alias("Defualt_Handler")));;

uint32_t vectors[]__attribute__((section(".vectors"))) = {
	(uint32_t) &_stack_top,
	(uint32_t) &Reset_Handler,
    (uint32_t) &NMI_Handler,
    (uint32_t) &H_Fault_Handler,
    (uint32_t) &MM_Fault_Handler,
    (uint32_t) &Bus_Fault,
    (uint32_t) &Usage_Fault
};

void Reset_Handler(void)
{
	unsigned int data_size = (unsigned char*)&_E_data - (unsigned char*)&_S_data;
	unsigned char* P_src = (unsigned char*)&_E_text;
	unsigned char* P_dst = (unsigned char*)&_S_data;
    int i;
	for(i = 0; i <data_size; i++)
	{
		*((unsigned char*)P_dst++) = *((unsigned char*)P_src++);
	}

	unsigned int bss_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
    P_dst = (unsigned char*)&_S_bss;

   for(i = 0; i <bss_size; i++)
	{
		*((unsigned char*)P_dst++) = (unsigned char)0;
	}

	main();
}