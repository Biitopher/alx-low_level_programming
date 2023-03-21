#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
* _strlen - returns the string length
* @s: string
* Return: length of string
*/
int _strlen(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}

 /**
 * _strncpy - copies the string
 * @dest: destination of string
 * @strncpy: string copy
 * @src: source of string
 * Return: to dest
 */
char *_strncpy(char *dest, char *src)
{
int len, a;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (a = 0; a < len; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}

/**
* new_dog - function that creates a new dog
* @name: first element
* @age: second element
* @owner: third element
* Return: new dog success, null if not
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strncpy(dog->name, name);
_strncpy(dog->owner, owner);
dog->age = age;
return (dog);
}
