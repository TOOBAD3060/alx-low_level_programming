#include "main.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name:first mem to be initialised
 * @age:second mem
 * @owner:third mem
 * Return: 0(Always success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

