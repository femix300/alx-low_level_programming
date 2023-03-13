/**
 *_strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, const char *src)
{
	char *temp = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}

