#include "main.h"

/**
 * main - reads the ELF header of a given file
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;
	FILE *file = fopen(argv[1], "r");
	Elf64_Ehdr header;

	if (argc != 2)
	fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
	exit(EXIT_FAILURE);
	if (file == NULL)
	perror("fopen");
	exit(EXIT_FAILURE);
	if (fread(&header, sizeof(header), 1, file) != 1)
	perror("fread");
	exit(EXIT_FAILURE);
	printf("ELF Header:\n");
	printf(" Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{	printf("%02x ", header.e_ident[i]);
		printf("\n");
	}
	printf(" Class: %d\n", header.e_ident[EI_CLASS]);
	printf(" Data: %d\n", header.e_ident[EI_DATA]);
	printf(" Version: %d\n", header.e_ident[EI_VERSION]);
	printf(" OS/ABI: %d\n", header.e_ident[EI_OSABI]);
	printf(" ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf(" Type: %d\n", header.e_type);
	printf(" Machine: %d\n", header.e_machine);
	printf(" Version: %d\n", header.e_version);
	printf(" Entry point address: 0x%lx\n", header.e_entry);
	printf(" Start of program headers: %ld(bytes into file)\n", header.e_phoff);
	printf(" Start of section headers: %ld(bytes into file)\n", header.e_shoff);
	printf(" Flags: 0x%x\n", header.e_flags);
	printf(" Size of this header: %d(bytes)\n", header.e_ehsize);
	printf(" Size of program headers: %d(bytes)\n", header.e_phentsize);
	printf(" Number of program headers: %d\n", header.e_phnum);
	printf(" Size of section headers: %d(bytes)\n", header.e_shentsize);
	printf(" Number of section headers: %d\n", header.e_shnum);
	printf(" Section header string table index: %d\n", header.e_shstrndx);
	fclose(file);
	return (0);
}

