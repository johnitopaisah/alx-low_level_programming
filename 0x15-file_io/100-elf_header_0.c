#include "main.h"

/**
 * print_class - Function that prints the class of an ELF header.
 * @e_ident: pointer to an array containing the ELF class
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class:                         ");

	switch (e_ident[EI_CLASS])
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
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - Function that prints the data of an ELF header
 * @e_ident: Pointer to an array containing the ELF class.
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data:                         ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			breadk;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - Function that prints the version of an ELF header
 * @e_ident: pointer to an array containing the ELF version.
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version:                         %d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_osabi - Function that prints the OS/ABI of an ELF header.
 * @e_ident: pointer to an array containing the ELF version
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI:                         ");

	switch (e_ident[EI_OSABI])
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
		case ELFOSABI_Linux:
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
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_entry - Function that prints the entry point of an ELF header
 * @e_entry: The address of the ELF entry point.
 * @e_ident: pointer to an array contaning the ELF class
 */
void print_entry(unsigned int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address:             ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = (((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF00));
		e_entry = ((e_entry << 16) | (e_entry >> 16));
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#x\n", e_entry);
}
