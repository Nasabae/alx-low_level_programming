#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to read and print.
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, nasa;
char *buffer = malloc(sizeof(char *) * letters);
if (!buffer)
return (0);
if (!filename)
return (0);
fd = open(filename, O_RDONLY, 0600);
if (fd == -1)
return (0);
nasa = read(fd, buffer, letters);
write(STDOUT_FILENO, buffer, nasa);
free(buffer);
close(fd);
return (nasa);
}
