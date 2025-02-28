#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string.
 *
 * Description: Replaces specific letters with corresponding numbers:
 * 'a' and 'A' → '4', 'e' and 'E' → '3', 'o' and 'O' → '0',
 * 't' and 'T' → '7', 'l' and 'L' → '1'.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replacements[j];
				break;
			}
		}
	}

	return (str);
}

