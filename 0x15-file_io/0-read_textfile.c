#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: if filename is NULL return 0
 * @letters: where letters is the number of
 * letters it should read and print
 * Return:the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int fd;
size_t x;
size_t y;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * (letters));
if (!buffer)
return (0);
y = read(fd, buffer, letters);
x = write(STDOUT_FILENO, buffer, y);
free(buffer);
close(fd);
return (x);
}
