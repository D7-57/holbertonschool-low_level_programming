#include "main.h"

/**
 * print_square - Prints a square of '#' characters.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++) /* Loop for square rows */
		{
			for (j = 0; j < size; j++) /* Loop for square columns */
				_putchar('#');
			_putchar('\n'); /* Newline after each row */
		}
	}
	else
	{
		_putchar('\n'); /* Print newline if size <= 0 */
	}
}
