#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Determine if a random number is a positive, negative or zero.
*
*Return: 0 on success
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d is ", n);

if (n > 0)
{
printf("positive\n");
}
else if (n < 0)
{
printf("negative\n");
}
else
{
printf("zero\n");
}
return (0);
}
	
