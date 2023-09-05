#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	len++;
	len++;
	}

	new_str = malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
	return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	new_str[k++] = av[i][j];
	new_str[k++] = '\n';
	}

	new_str[len] = '\0';

	return (new_str);
}

