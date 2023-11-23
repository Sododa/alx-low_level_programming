#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @index: starting from 0 of the bit you want to set
 * @n:unsigned long integer
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int maximum = 0x01;
maximum = ~(maximum << index);
if (maximum == 0x00)
return (-1);
*n &= maximum;
return (1);
}
