#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a single string.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string.
 *         NULL if ac == 0, av == NULL, or memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length required */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* For the newline character */
	}

	len++; /* For the null terminator */
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Copy arguments into the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, index++)
			str[index] = av[i][j];

		str[index] = '\n'; /* Add newline */
		index++;
	}

	str[index] = '\0'; /* Null-terminate the string */
	return (str);
}
