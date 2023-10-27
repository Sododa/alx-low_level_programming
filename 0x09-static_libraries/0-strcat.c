#include "main.h"
/**
 *  _strcat - it is a function that concatenates two strings
 *  @dest: it is a entered value
 *  @src:it is a entered value
 *
 *  Return: void
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
