#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer
 */

 int _atoi(char *s)

{
int sign = 1;
int num = 0;
int digit;
int in_num = 0;

for (; *s; s++)
{
if (*s == '-')
sign *= -1;
else if (*s == '+')
sign *= 1;
else if (*s >= '0' && *s <= '9')
{
digit = *s - '0';
num = num * 10 + sign * digit;
in_num = 1;
}
else if (in_num)
{
break;
}
}

return num;
}
