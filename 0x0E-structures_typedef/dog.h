#ifndef DOG
#define DOG
/**
 * struct dog - a dog information
 * @name: the name of the dog
 * @age: the dogs age
 * @owner: the dogs owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
