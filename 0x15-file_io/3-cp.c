#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 success
 */

int main(int argc, char **argv)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copy_file(argv[1], argv[2]);
exit(0);
}


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





