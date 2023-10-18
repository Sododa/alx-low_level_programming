#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";

for (int i = 0; separators[i]; i++)
{
if (separators[i] == c)
{
return (1);
}
}

return (0);
}

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
int capitalize_next = 1;
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (is_separator(str[i]))
{
capitalize_next = 1;
}
else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32; // Convert to uppercase by subtracting 32
capitalize_next = 0;
}
else
{
capitalize_next = 0;
}
}
return (str);
}

