#include "dog.h"
#include <stdlib.h>

/**
  * lenstr - get length of string
  * @str: string
  * Return: length
  */

int lenstr(char *str)
{
	int len;

	while (*str++)
		len++;
	return (len);
}

/**
  * cpystr - copy string
  * @dest: destination
  * @src: source
  * Return: string
  */

char *cpystr(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i); i++)
		*(dest + i) = *(src + i);

	*dest++ = '\0';

	return (dest);
}

/**
  * new_dog - function that creates new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner
  * Return: struct of new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;

	if (name == NULL  || age < 0 || owner == NULL)
		return (NULL);

	ptr_dog = malloc(sizeof(dog_t));

	if (ptr_dog == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}

	ptr_dog->name = malloc(sizeof(char) * (lenstr(name) + 1));

	if (ptr_dog->name == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}

	ptr_dog->owner = malloc(sizeof(char) * (lenstr(owner) + 1));

	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}

	/*copy string names/owner */

	ptr_dog->name = cpystr(ptr_dog->name, name);
	ptr_dog->age = age;
	ptr_dog->owner = cpystr(ptr_dog->owner, owner);

	return (ptr_dog);
}
