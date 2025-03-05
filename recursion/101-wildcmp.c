#include "main.h"

/**
 * wildcmp - Compares two strings allowing for wildcard '*' in s2.
 * @s1: The first string.
 * @s2: The second string, which may contain the wildcard '*'.
 *
 * Return: 1 if strings are considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (!*s1)
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (!*s1 || !*s2)
		return (*s1 == *s2);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
