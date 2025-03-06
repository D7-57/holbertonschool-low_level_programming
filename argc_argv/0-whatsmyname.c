#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: Argument count (unused)
 * @argv: Argument vector (array of strings)
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
