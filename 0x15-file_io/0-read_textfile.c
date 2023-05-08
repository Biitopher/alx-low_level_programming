#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters:  number of letters it should read and print
 * Return: 0 if file is  not read, number of bytes if success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n, k;
	char *buff
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);
	buff = malloc(sizeof(char) * letters);
	k = read(fd, buff, letters);
	n = write(STDOUT_FILENO, buff, k);
	free(buff);
	close(fd);
	return (n);
}
