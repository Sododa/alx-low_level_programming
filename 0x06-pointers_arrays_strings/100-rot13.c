#include "main.h"
/**
 * *rot13 - the prototype
 * str - to input 
 * Return: str always
 */
char *rot13(char *str)
{
char *input = str;
char *output = str;

while (*input)
{
if ((*input >= 'a' && *input <= 'z') || (*input >= 'A' && *input <= 'Z'))
{
char base = (*input >= 'a' && *input <= 'z') ? 'a' : 'A';
            *output = ((*input - base + 13) % 26) + base;
}
else
{
*output = *input;
}
input++;
output++;
}
return (str);
}

