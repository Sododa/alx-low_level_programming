#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where to be stored
 *@src: memory where to be copied
 *@n: number of bytes
 *Return:memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
