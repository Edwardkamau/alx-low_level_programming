#ifndef __DOUBLEGUARD
#define __DOUBLEGUARD

/**
 * struct dog - structure of three members
 *
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
