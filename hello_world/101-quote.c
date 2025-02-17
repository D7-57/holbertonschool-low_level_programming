#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error
 *              and returns 1. The message is:
 *              "and that piece of art is useful\" -
 *              Dora Korpar, 2015-10-19" + new line
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
	const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, 59); /* Length includes newline */
	return (1);
}
