#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times.
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++) /* Repeat 10 times */
	{
		for (num = 0; num <= 14; num++) /* Loop from 0 to 14 */
		{
			if (num > 9) /* Print tens digit if num >= 10 */
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0'); /* Print ones digit */
		}
		_putchar('\n'); /* Print newline */
	}
}
