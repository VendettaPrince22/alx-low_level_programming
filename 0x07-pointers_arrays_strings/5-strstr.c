#include <stdlib.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: occurrence of substring
 *
 * Return: pointer to beginning of located substring
 * If substring is not found, return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *str;
	int i;
	int j;

	i = 0;
	while (needle[i] != '\0')
	{
		j = 0;
		while (haystack[j] != '\0')
		{
			if (needle[i] == haystack[j])
			{
				str = &haystack[j];
				return (str);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
