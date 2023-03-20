#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type elements
 * @name: first element
 * @age: second element
 * @owner: third element
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typeof struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *p, char *name, float age, char *owner);
void print_dog(struct dog *p);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *p);
char *_strcpy(char dest, char src);
int _strlen(char *s);

#endif
