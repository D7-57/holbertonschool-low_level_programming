#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0-9)
 * @c: The character to check
 *
 * Description: This function takes an integer representing an ASCII
 * character and determines whether it is a numeric digit (0-9).
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9') /* ASCII values: 48 to 57 */
		return (1);
	return (0);
}
