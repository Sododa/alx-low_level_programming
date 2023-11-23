#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index:  is the index, starting from
 * 0 of the bit you want to get
 * @n: long integer
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int maximum = 0x01;
maximum <<= index;
if (maximum == 0)
return (-1);

if ((n & maximum))
return (1);
else
return (0);
}
