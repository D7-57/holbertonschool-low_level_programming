#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9,
 * except 2 and 4, followed by a new line.
 */
void print_most_numbers(void)
{
	char num = '0';

	while (num <= '9') /* Loop from '0' to '9' */
	{
		if (num != '2' && num != '4') /* Skip '2' and '4' */
			_putchar(num);
		num++;
	}
	_putchar('\n'); /* Print newline */
}
