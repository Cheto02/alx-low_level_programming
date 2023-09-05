#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts the number of words in a string
 * @str: string to count
 *
 * Return: number of words
 */
int word_count(char *str)
{
	int i, wc = 0, in_word = 0;

	for (i = 0; str[i]; i++)
	{
	if (str[i] == ' ')
	in_word = 0;
	else if (in_word == 0)
	{
	in_word = 1;
	wc++;
	}
	}

	return (wc);
}

/**
 * free_words - frees an array of strings
 * @words: array of strings to free
 * @j: number of strings to free
 *
 * Return: void
 */
void free_words(char **words, int j)
{
	while (--j >= 0)
	free(words[j]);
	free(words);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings or NULL if failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, wc, len, in_word = 0;

	if (str == NULL || str[0] == '\0')
	return (NULL);

	wc = word_count(str);
	if (wc == 0)
	return (NULL);

	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
	return (NULL);

	for (i = 0, j = 0; str[i]; i++)
	{
	if (str[i] == ' ')
	in_word = 0;
	else
	{
	if (in_word == 0)
	{
	for (len = 0; str[i + len] != ' ' && str[i + len]; len++)
	words[j] = malloc((len + 1) * sizeof(char));
	if (words[j] == NULL)
	{
	free_words(words, j);
		return (NULL);
	}
	for (k = 0; k < len; k++)
	words[j][k] = str[i + k];
	words[j++][len] = '\0';
	}
	in_word = 1;
	}
	}

	words[wc] = NULL;

	return (words);
}

