#include <stdlib.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: bytes to check against
 *
 * Return: pointer to the byte in s matching bytes in accept
 * If no matching byte found, return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *str;
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				str = &s[i];
				return (str);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
