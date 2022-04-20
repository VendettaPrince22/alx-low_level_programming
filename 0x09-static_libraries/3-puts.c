#include "main.h"
/**
 * _puts - will print a string
 *
 * @str: char type pointer
 */
void _puts(char *s)
{
	int i;
	for (i = 0; s[i] != 00; i++)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
