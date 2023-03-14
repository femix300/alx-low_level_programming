#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts the number of words in a string
 * @str: the input string
 * Return: the number of words
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the input string
 * Return: a pointer to an array of words or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n_words;

	if (str == NULL || *str == '\0')
		return (NULL);

	n_words = count_words(str);
	if (n_words == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (n_words + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < n_words; i++)
	{
		while (str[j] == ' ')
			j++;

		k = j;
		while (str[k] != ' ' && str[k] != '\0')
			k++;

		words[i] = malloc(sizeof(char) * (k - j + 1));
		if (words[i] == NULL)
		{
			while (--i >= 0)
				free(words[i]);
			free(words);
			return (NULL);
		}

		for (int l = 0; j < k; l++, j++)
			words[i][l] = str[j];
		words[i][k - j] = '\0';
	}

	words[i] = NULL;

	return (words);
}

