#include "main.h"

/**
 * main - The main funtion
 *	Displays the information contained in the
 *	ELF header at the start of an ELF file
 * @ac: the number of arguments supplied to the program
 * @av: an array of pointer to the arguments
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *		the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) ac, char *av[])
{
	Elf64_Ehdr *header;
	int opn, rd;

	opn = open(av[1], O_RDONLY);
	if (opn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(opn);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}

	rd = read(opn, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf(opn);
		dprintf(STDERR_FILENO, "Error: '%s': No such file\n", av[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_type, header->e_ident);

	free(header);
	close_elf(opn);
	return (0);
}
