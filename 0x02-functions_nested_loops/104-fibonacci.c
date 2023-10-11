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
while (count < 96)
{
c = a + b;
a = b;
b = c;
if (count == 95)
printf("%lu\n", c);
else
printf("%lu, ", c);
count++;
}
return (0);
}
