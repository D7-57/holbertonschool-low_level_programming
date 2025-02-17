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

	/* 59 is the length of the message including the newline */
	write(2, msg, 59);
	return (1);
}
