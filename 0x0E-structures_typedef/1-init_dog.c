#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of dog structure
 * @d: pointer to structure
 * @name: dog name to be initialized
 * @age: dog age to be initialized
 * @owner: dog owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
