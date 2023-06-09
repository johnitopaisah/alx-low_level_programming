#include "main.h"

/**
 * check_elf - function that checks if a file is an ELF file
 * @e_ident: pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98/
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
			e_ident[index] != 'E' &&
			e_ident[index] != 'L' &&
			e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Function that prints the magic numbers of an ELF header
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Description: Magic numbers are seperated by spaces.
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf(" Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_abi - Function that prints the ABI version of an ELF header
 * @e_ident: pointer to an array containing the ELF ABI version
 */
void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version:                         %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Function that prints the type of an ELF header
 * @e_type: The ELF type
 * @e_ident: pointer to an array containing the ELF class.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type:                            ");

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
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * close_elf - Function that close an ELF file
 * @elf: the file descriptor of the ELF file
 *
 * Description: If he file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
