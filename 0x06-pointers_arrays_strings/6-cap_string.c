#include "main.h"
/**
*cap_string - function that capitalizes all words of a string
*@str: points to the string
*Return: pointer to string.
*/
char *cap_string(char *str)
{ int i;
int capitalize_next = 1; 
/*Indicates whether the next character should be capitalized */

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{')
{
capitalize_next = 1;
}
else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
capitalize_next = 0;
}
else
{
capitalize_next = 0;
}
}
return (str);
}
