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

#endif
