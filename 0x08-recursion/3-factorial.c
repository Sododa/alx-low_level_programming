#include "main.h"
/**
 * _strlen_recursion - Returns the length of the string
 * @s: The string to be measured
 * Return:the length of the string
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n *factorial(n - 1));
}
