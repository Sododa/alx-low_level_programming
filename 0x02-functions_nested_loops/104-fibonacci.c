#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long a = 1, b = 2, c;
int count = 0;

printf("%lu, %lu, ", a, b);
while (count < 97) // Updated to print 98 numbers
{
c = a + b;
a = b;
b = c;
if (count == 96)
printf("%lu\n", c);
else
printf("%lu, ", c);
count++;
}
return (0);
}

