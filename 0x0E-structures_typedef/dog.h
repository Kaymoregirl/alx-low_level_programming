#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs basic information
 * @name: first member
 * @name: second member
 * @name: third member
 *
 *Description: longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_b - typedef for struct dog
 */

typedef struct dog dog_b;

void init_dog(struct dog *k, char *name, float age, char *owner);
void print_dog(struct dog *k);
dog_b *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *k);
char *_strcpy(char *dest, char *src);
int _strlen(char *f);

#endif
