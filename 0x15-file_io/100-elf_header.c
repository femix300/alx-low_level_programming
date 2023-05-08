#include "main.h"
/**
 * elf_check - Checks whether a file is an ELF file or not
 * @e_indnt: pointer to an array containing the ELF magic numbers.
 * Description: exit with exit code 98
 * if the file is not an elf.
 */

void elf_check(unsigned char *e_indnt)
{
	int idx;

	idx = 0;

	while (idx < 4)
	{
		if (e_indnt[idx] != 127 &&
				e_indnt[idx] != 'E' &&
				e_indnt[idx] != 'L' &&
				e_indnt[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}

		idx++;
	}
}
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


/**
 * display_the_type - displays the type of an ELF header
 * @e_type: the type of the elf/ the elf type
 * @e_indnt: this is a pointer to an array that contains the ELF class.
 */
void display_the_type(unsigned int e_type, unsigned char *e_indnt)
{
	printf("  Type:                              ");

	if (e_indnt[EI_DATA] == ELFDATA2MSB)
	{
		e_type = (e_type >> 8) & 0xff;
	}

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
			break;
	}
}

/**
 * elf_closer - Closes an ELF file.
 * @elf: file descriptor of the ELF file.
 * Description: If file cannot be closed, then, - exit code 98.
 */

void elf_closer(int elf)
{
	int status;

	status = close(elf);

	if (status < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * display_os_abi - this function displays the OS/ABI of an ELF header.
 * @e_indnt: is a pointer to an array that contains the ELF version.
 */
void display_os_abi(unsigned char *e_indnt)
{
	printf("  OS/ABI:                            ");

	switch (e_indnt[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;

		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;

		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;

		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_indnt[EI_OSABI]);
	}
}

/**
 * main - it displays the information contained in the
 * ELF header at the start of an ELF file.
 * the function fails if the file is not an ELF file
 * with exit code 98
 *
 * @argc: The number of arguments that is supplied to the program.
 * @argv: An array of pointers to the arguments passed in
 *
 * Return: 0 on successful displaying
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	Elf64_Ehdr *head;
	int re;
	int op;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));

	if (!head)
	{
		elf_closer(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	re = read(op, head, sizeof(Elf64_Ehdr));
	if (re == -1)
	{
		free(head);
		elf_closer(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	elf_check(head->e_ident);
	printf("ELF Header:\n");
	magic_display(head->e_ident);
	display_the_class(head->e_ident);
	display_the_data(head->e_ident);
	version_display(head->e_ident);
	display_os_abi(head->e_ident);
	abi_printer(head->e_ident);
	display_the_type(head->e_type, head->e_ident);
	display_the_entry(head->e_entry, head->e_ident);

	free(head);
	elf_closer(op);
	return (0);

}
