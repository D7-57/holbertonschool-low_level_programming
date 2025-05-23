#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Description: This function prints the multiplication table of 9,
 * formatted properly with spaces and commas.
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;

			if (col != 0) /* Add formatting for columns after the first */
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10) /* Add extra space for single-digit numbers */
					_putchar(' ');
			}

			if (product < 10)
				_putchar(product + '0');
			else
			{
				_putchar((product / 10) + '0'); /* Print tens place */
				_putchar((product % 10) + '0'); /* Print ones place */
			}
		}
		_putchar('\n');
	}
}
