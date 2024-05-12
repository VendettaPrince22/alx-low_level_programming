#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a string to stderr followed by a new line
 *
 * Return: 1
 */
int main(void)
{
	char buf1[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, buf1, 100);

	return (1);
}
