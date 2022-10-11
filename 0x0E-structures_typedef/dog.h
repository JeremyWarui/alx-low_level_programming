#ifndef _DOG_H
#define _DOG_H

/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;

/**
  * struct dog - structure for dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of the dog
  *
  * Description: Structure for dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
  * init_dog - initalize the dog structure
  */

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
  * print_dog - prints a stuct dog
  */

void print_dog(struct dog *d);

/**
  * new_dog - create a new dog using new structure type
  */
dog_t *new_dog(char *name, float age, char *owner);

/**
  * free_dog - free memory
  */

void free_dog(dog_t *d);

#endif
