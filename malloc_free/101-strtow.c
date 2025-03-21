#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, words = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	}
	return (words);
}

/**
 * allocate_word - Allocates and copies a word from the string.
 * @str: The input string.
 * @start: The starting index of the word.
 * @length: The length of the word.
 *
 * Return: A pointer to the newly allocated word.
 */
char *allocate_word(char *str, int start, int length)
{
	char *word;
	int i;

	word = malloc((length + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		word[i] = str[start + i];
	word[length] = '\0';

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of words, or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, word_count, word_len, start;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < word_count; i++)
	{
		while (str[j] == ' ')
			j++;
		start = j;
		word_len = 0;

		while (str[j] != ' ' && str[j] != '\0')
		{
			word_len++;
			j++;
		}

		words[i] = allocate_word(str, start, word_len);
		if (words[i] == NULL)
		{
			while (i >= 0)
				free(words[i--]);
			free(words);
			return (NULL);
		}
	}

	words[word_count] = NULL;
	return (words);
}
