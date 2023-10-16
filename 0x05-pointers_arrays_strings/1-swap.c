#include "main.h"

/**
 * swap_int - change the two integers
 * @a: swaps a and stores it to b
 * @b: swaps b and stores it to a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
a* = change;
}
