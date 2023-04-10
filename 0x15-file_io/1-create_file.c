#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to the file being read
 * @text_content: string terminated to write the file
 * Return: 1 on success, -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
int fd, n;
int len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 032);
n = write(fd, text_content, len);
if (fd == -1 || n == -1)
return (-1);
close(fd);
return (1);
}
