#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: Character type string
 * @src: Character type string
 * Descrition: copy the string pointed to the pointer 'src' to the buffer
 * pointed to by 'dest'
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)

{
int z = -1;
do {
z++;
dest[z] = src[z];
} while (src[z] != '\0');
return (dest);
}
