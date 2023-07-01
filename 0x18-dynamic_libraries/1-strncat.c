#include "main.h"
/**
 * _strncat - concatenates at most n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to concatenate
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	/* Move to the end of dest */
	while (*dest)
		dest++;

	/* Copy at most n bytes from src to dest */
	while (*src && n--)
		*dest++ = *src++;

	/* Add null terminator to dest */
	*dest = '\0';

	return (temp);
}
