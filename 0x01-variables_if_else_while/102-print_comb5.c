#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0(Success)
 */

int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 98; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
putchar((num1 / 10) + '0'); /* Print the tens digit of num1 */
putchar((num1 % 10) + '0'); /* Print the ones digit of num1 */
putchar(' ');
putchar((num2 / 10) + '0'); /* Print the tens digit of num2 */
putchar((num2 % 10) + '0'); /* Print the ones digit of num2 */
if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
ureturn (0);
}

