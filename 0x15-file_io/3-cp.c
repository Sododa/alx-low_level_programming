#include "main.h"
/**
 * error_file - checks if files can be opened.
 * @file_from: file from which it is checked
 * @file_to: file_to go to
 * @argv: arguments.
 * Return: none.
 */
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
/**
 * main - main to be checked.
 * @argc: ncount of arguments.
 * @argv: arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int file_from, file_to, err_close;
ssize_t jchars, j;
char buf[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);
jchars = 1024;
while (jchars == 1024)
{
jchars = read(file_from, buf, 1024);
if (jchars == -1)
error_file(-1, 0, argv);
j = write(file_to, buf, jchars);
if (j == -1)
error_file(0, -1, argv);
}
err_close = close(file_from);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
err_close = close(file_to);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
