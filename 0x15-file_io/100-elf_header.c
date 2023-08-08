#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
#include "main.h"

/**
 * display_elf_header - Displays the information contained in the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void display_elf_header(Elf64_Ehdr *header);

/**
 * main - Displays the information contained in the ELF header of an ELF file.
 * @argc: The argument count.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open file '%s'\n", argv[1]);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
		close(fd);
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}

	display_elf_header(&header);
	close(fd);

	return (0);
}

/**
 * display_elf_header - Displays the information contained in the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void display_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{

	}

	printf("  Entry point address:               0x%lx\n", header->e_entry);
}
