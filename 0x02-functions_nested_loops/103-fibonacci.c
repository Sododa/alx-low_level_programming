#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long a = 1, b = 2, c, sum = 0;

while (a <= 4000000)
{
if (a % 2 == 0)
{
sum += a;
}
c = a + b;
a = b;
b = c;
}
printf("%ld\n", sum);
return (0);
}
