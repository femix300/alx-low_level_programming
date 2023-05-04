#include "main.h"

/**
 * abi_printer - displays the ABI version of an ELF header.
 * @e_indnt: pointer to an array that contains the ELF ABI version.
 */
void abi_printer(unsigned char *e_indnt)
{
	printf("  ABI Version:                       %d\n", e_indnt[EI_ABIVERSION]);
}

