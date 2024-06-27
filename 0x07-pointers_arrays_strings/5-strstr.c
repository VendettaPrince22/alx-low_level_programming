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
	int k;

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] != '\0')
			{
				if (needle[j] == haystack[i + j])
				{
					k = 1;
				} else
				{
					k = 0;
					break;
				}
				j++;
			}
			if (k == 1)
			{
				str = &haystack[i];
				return (str);
			}
		}
		i++;
	}

	return (NULL);
}
