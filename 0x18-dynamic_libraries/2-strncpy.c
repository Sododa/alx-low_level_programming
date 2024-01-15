#include "main.h"
/**
* _strncpy - a function that copies a string.
* @dest: destination string pointer.
* @src: source string pointer.
* @n: number of bytes to be used
* Return: pointer to destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
int k;
k = 0;
while (k < n && src[k] != '\0')
{
dest[k] = src[k];
k++;
}
while (k < n)
{
dest[k] = '\0';
k++;
}
return (dest);
}
