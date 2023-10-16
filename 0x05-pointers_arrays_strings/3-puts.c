#include "main.h"

/**
 *_puts -Function that prints a string 
 * @str: - pointers the string
 * Return: string and new line
 */

void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
