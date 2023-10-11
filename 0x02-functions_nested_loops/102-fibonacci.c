#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long int prev = 1, current = 2, next, sum;
int count;
printf("%ld, %ld", prev, current);
for (count = 3; count <= 50; count++)
{
next = prev + current;
sum += next;
printf(", %ld", next);
prev = current;
current = next;
}
printf("\n");
return (0);
}
