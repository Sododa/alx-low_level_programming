#include <stdio.h>

/**
 * main This program prints the digits from 0 to 9 followed by a newline.
 *
 * Return: Always 0 (success) 
 */

int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
return (0);
}
