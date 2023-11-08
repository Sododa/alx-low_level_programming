#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function as a parameter
 * on each element of an array
 * @array: an array it starts from 0
 * @size: how many elements to be printed
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
