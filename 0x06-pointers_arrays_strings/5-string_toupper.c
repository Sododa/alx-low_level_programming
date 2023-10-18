#include "main.h"

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase
 * @str: The string to be converted.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32; // Convert to uppercase by subtracting 32
}
}
return (str);
}
