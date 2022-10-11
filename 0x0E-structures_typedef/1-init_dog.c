#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog -  description
*
* @d: input function argument
* @name: input function argument
* @age: input function argument
* @owner: input function argument
*
* Return: output
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)

d->name = name;
d->age = age;
d->owner = owner;

}
