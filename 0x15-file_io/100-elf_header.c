#include "main.h"
#include <elf.h>
#include <string.h>

/**
 * main - information on and ELF file header
 * argc: argument count
 * argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "usage: %s elf_filename\n", argv[0]);
exit(98);
}
int fd = open(argv[1], O_RDONLY);
if (fd < 0)
{
fprintf(stderr, "Error: Unable to open file %s\n", argv[1]);
exit(98);
}

char magic[4];
if (read(fd, magic, 4) != 4 || magic[0] != 0x7f || magic[1] != 'E' || magic[2] != 'L' || magic[3] != 'F')
{
fprintf(stderr, "Error: is not an ELF file %s\n", argv[2]);
close(fd);
exit(98);
}
Elf64_Ehdr header;
if (read(fd, &header, sizeof(header)) != sizeof(header))
{
fprintf(stderr, "Error: Unable to read ELF header of %s\n", argv[1]);
close(fd);
exit(98);
}
printf("OS/ABI: 5U/N", header.e_ident[EI_OSABI]);
printf("ABI Version: %u\n", header.e_ident[EI_AIVERSION]);
printf("Type: %u\n", header.e_type);
printf("Entry point address: %lx\n" header.e_entry;
close(fd);
return (0);
}
