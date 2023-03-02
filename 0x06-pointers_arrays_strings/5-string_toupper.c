
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: The string to be modified
 *
 * Return: The modified string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32; /* Convert lowercase to uppercase */
		}
		i++;
	}

	return (s);
}

