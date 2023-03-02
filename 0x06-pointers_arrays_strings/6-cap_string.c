
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to modify
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *s)
{
	int i;
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
			if (ptr != s && *(ptr - 1) >= 'A' && *(ptr - 1) <= 'Z')
				*ptr += 32;
		}
		ptr++;
	}

	return (s);
}

