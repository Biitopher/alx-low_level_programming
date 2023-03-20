#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type
 * @d: struct dog
 * @name: first element
 * @age: second element
 * @owner: third element
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
