#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Main function
*
* Return: Always 0(success)
*/
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* Calculate the last digit */
m = n % 10;
printf("Last digit of %d is %d and is ", n, m);
if (m > 5)
printf("greater than 5");
else if (m == 0)
printf("0");
else
printf("less than 6 and not 0");
printf("\n");
return (0);
}

