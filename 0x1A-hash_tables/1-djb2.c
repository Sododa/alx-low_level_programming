#include "hash_tables.h"
/**
 * hash_djb2 - use the hash_djb2 function that you wrote earlier
 * @str: string in the function
 * Return: the index at which the key/value pair should be
 * stored in the array of the hash table
 */

unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;
hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash) +c; /* hash * 33 + c */
}
return (hash);
}
