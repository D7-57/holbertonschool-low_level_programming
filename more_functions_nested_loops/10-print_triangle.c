#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using '#'.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int j, i, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < size; j++)
	{
		/* Print leading spaces */
		for (i = 0; i < size - j - 1; i++)
			_putchar(' ');

		/* Print '#' symbols */
		for (k = 0; k < j + 1; k++)
			_putchar('#');

		_putchar('\n');
	}
}
