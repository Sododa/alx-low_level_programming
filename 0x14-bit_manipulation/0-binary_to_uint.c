#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int base = 1, number = 0, length = 0;
if (b == NULL)
return (0);
while (b[length])
length++;
while (length)
{
if (b[length - 1] != '0' && b[length - 1] != '1')
return (0);
if (b[length - 1] == '1')
number += base;
base *= 2;
length--;
}
return (number);
}
