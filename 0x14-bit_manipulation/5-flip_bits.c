#include "main.h"
/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another.
 * @n: unsigned long integer
 * @m: unsigned long integer
 * Return: null
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, flipbit = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (j = 63; j >= 0; j--)
{
current = exclusive >> j;
if (current & 1)
flipbit++;
}
return (flipbit);
}
