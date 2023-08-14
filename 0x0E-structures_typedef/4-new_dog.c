#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @f: string to evaluate
 *
 *Return: the length of the string
 */

int _strlen(char *f)
{
	int u;

	u = 0;

	while (f[u] != '\0')
	{
		u++;
	}
	return (u);
}
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, u;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (u = 0; u < len; u++)
	{
		dest[u] = src[u];
	}
	dest[u] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_b *new_dog(char *name, float age, char *owner)
{
	dog_b *dog;
	int len1; len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_b));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (Null);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 2));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age =age;

	return (dog);
}
