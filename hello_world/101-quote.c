#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints a specific quote to the standard error
 * without using printf or puts, and returns 1.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, quote, 59);
    return (1);
}
