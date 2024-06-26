#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 * @s: string to check through
 * @c: character to locate
 *
 * Return: pointer to first occurrence of character
 * If character not found, return NULL
 */
char *_strchr(char *s, char c)
{
	char *str;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str = &s[i];
			return (str);
		}
		i++;
	}
	if (s[i] == '\0' && s[i] == c)
	{
		str = &s[i];
		return (str);
	}
	return (NULL);
}
