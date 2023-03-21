#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}
/**
* _strcpy - Copies a string to a buffer.
* @dest: The destination buffer.
* @src: The source string.
* Return: The copied string
*/

char *_strcpy(char *dest, const char *src)
{
	char *temp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	char *name_copy = malloc(_strlen(name) + 1);
	char *owner_copy = malloc(_strlen(owner) + 1);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(new_dog);
		return (NULL);
	}

	_strcpy(name_copy, name);
	_strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}

