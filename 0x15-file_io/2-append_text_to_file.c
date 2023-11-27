#include "main.h"
/**
 * append_text_to_file - function that appends text
 * at the end of a file.
 * @filename: is the name of the file
 * @text_content:NULL terminated string to add
 * at the end of the file
 * Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int jletters;
int r;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content)
{
for (jletters = 0; text_content[jletters]; jletters++)
;
r = write(fd, text_content, jletters);
if (r == -1)
return (-1);
}
close(fd);
return (1);
}
