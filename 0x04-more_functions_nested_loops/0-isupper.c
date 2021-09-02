#include "main.h"
/**
 * _isupper - This function will check if a letter is upper or not
 * @c: The letter to check.
 * Return: 1 if the letter is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
