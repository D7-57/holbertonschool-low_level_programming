#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++) /* Loop for n lines */
		{
			for (j = 0; j < i; j++) /* Print spaces before '\' */
				_putchar(' ');
			_putchar('\\'); /* Print '\' */
			_putchar('\n'); /* Newline after each '\' */
		}
	}
	else
	{
		_putchar('\n'); /* Print newline if n <= 0 */
	}
}
