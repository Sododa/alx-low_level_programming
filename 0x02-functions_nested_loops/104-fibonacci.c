#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long current = 1, next = 2, temp;
int count;

printf("%lu, %lu, ", current, next);
for (count = 2; count < 98; count++)
{
temp = current + next;
current = next;
next = temp;

if (count == 98)
printf("%lu\n", temp);
else
printf("%lu, ", temp);
}
return 0;
}
