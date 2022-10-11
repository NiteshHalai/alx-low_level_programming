#ifndef _DOG_H
#define _DOG_H
#define DOG

/**
 * struct dog - dog structure
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: dog owner
 *
 */

struct dog
{
char *name;
float age;
char *owner;
};

#endif /*_DOG_H */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
