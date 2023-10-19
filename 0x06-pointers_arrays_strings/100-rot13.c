#include "main.h"

/**
 * rot13 - the prototype
 *@str - to input 
 * 
 * Return: *str
 */

char *rot13(char *str)
{
char *p = str;
int i;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
while (*p)
{
for (i = 0; alpha[i]; i++)
{
if (*p == alpha[i])
{
*p = rot13[i];
break;
}
}
p++;
}
return (str);
}
