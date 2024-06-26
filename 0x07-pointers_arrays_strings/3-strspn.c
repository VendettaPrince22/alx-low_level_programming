
/**
 * _strspn - Gets the length of a prefix substring
 * @s: initial segment
 * @accept: segment to get bytes
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	unsigned int i;
	unsigned int j;

	n = 0;
	i = 0;
	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != ' ')
		{
			if (accept[i] == s[j])
			{
				n++;
			}
			j++;
		}
		i++;
	}

	return (n);
}
