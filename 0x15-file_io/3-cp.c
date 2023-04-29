#include "main.h"
#include <errno.h>


/**
 * close_file - file closing description
 * @fd: file to be closed
 * Return: nothing
 */

void close_file(int fd)
{
int i;
i = close(fd);
if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}


/**
 * create_buffer - allocate buffer 1024 bytes
 * @f: file storing chars
 * Return: pointer of allocated buff
 */
char *create_buffer(char *f)
{
char *buff;
buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
exit(99);
}
return (buff);
}


/**
 * main - prints the number of arguments passed into it
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
int a, b, from, to;
char *buff;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buff = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
a = read(from, buff, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || a == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
b = write(to, buff, a);
if (to == -1 || b == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write %s\n", argv[2]);
exit(99);
}
a = read(from, buff, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (a > 0);
close_file(from);
close_file(to);
return (0);
}
