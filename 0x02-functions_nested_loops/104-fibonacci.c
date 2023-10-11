#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long fib1 = 1, fib2 = 2, next;
int count;
printf("%lu, %lu, ", fib1, fib2);
for (count = ; count < 98; count++)
{
next = fib1 + fib2;
printf("%lu", next);
if (count < 97)
printf(", ");
fib1 = fib2;
fib2 = next;
}
printf("\n");
return (0);
}

