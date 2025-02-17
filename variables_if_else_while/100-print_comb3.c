#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different
 * combinations of two digits, ensuring they are unique and
 * in ascending order, using only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second;

	for (first = 0; first < 9; first++)
	{
		for (second = first + 1; second < 10; second++)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (first != 8 || second != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
