#include "main.h"
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file to be read
 * @letters: file to be read
 * Return: number of bytes if success, 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, n, l;
char *buff;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buff = malloc(sizeof(char) * letters);
l = read(fd, buff, letters);
n = write(STDOUT_FILENO, buff, l);
free(buff);
close(fd);
return (n);
}
