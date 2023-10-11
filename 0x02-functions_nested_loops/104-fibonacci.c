#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long a = 1, b = 2, c;
int count = 2; // Start with 2 to account for the first two numbers

printf("%lu, %lu, ", a, b);
while (count < 100) // Print 98 Fibonacci numbers
{
c = a + b;
a = b;
b = c;
if (count == 99)
printf("%lu\n", c);
else
printf("%lu, ", c);
count++;
}
return (0);
}

