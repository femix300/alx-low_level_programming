#include "main.h"
/**
 * magic_display - displays all the magic numbers of an ELF header.
 * @e_indnt: this is a pointer to an array containing
 * the ELF magic numbers
 * Description: Th Magic numbers are separated by spaces
 */

void magic_display(unsigned char *e_indnt)
{
	int idx;

	idx = 0;

	printf("  Magic:   ");
	while (idx < EI_NIDENT)
	{
		printf("%02x", e_indnt[idx]);

		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
		{
			printf(" ");
		}
		idx++;
	}
}

/**
 * display_the_entry - it displays the entry point of an ELF header.
 * @e_ntry: address of the ELF entry point.
 * @e_indnt: is a pointer to an array containing the ELF class.
 */
void display_the_entry(unsigned long int e_ntry, unsigned char *e_indnt)
{
	printf("  Entry point address:               ");

	if (e_indnt[EI_DATA] == ELFDATA2MSB)
	{
		e_ntry = ((e_ntry << 8) & 0xFF00FF00) |
			((e_ntry >> 8) & 0xFF00FF);
		e_ntry = (e_ntry << 16) | (e_ntry >> 16);
	}

	if (e_indnt[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_ntry);
	}

	else
		printf("%#lx\n", e_ntry);
}
/**
 * version_display - prints out the version of an ELF header
 * @e_indnt: is a pointer to an array that contains the ELF version
 */
void version_display(unsigned char *e_indnt)
{
	int version;

	version = e_indnt[EI_VERSION];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
	{
		printf(" (current)\n");
	}

	else
	{
		printf("\n");
	}
}

/**
 * display_the_data - it prints out the data of an ELF header.
 * @e_indnt: is a pointer to an array that is containing the ELF class.
 */
void display_the_data(unsigned char *e_indnt)
{
	printf("  Data:                              ");

	switch (e_indnt[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_indnt[EI_CLASS]);
	}
}

/**
 * display_the_class - Prints the class of an ELF header.
 * @e_indnt: A pointer to an array containing the ELF class.
 */
void display_the_class(unsigned char *e_indnt)
{
	printf("  Class:                             ");

	switch (e_indnt[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_indnt[EI_CLASS]);
	}
}

