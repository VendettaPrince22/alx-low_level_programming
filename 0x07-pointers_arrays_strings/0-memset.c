
/**
 * _memset - fills memory with a constant byte
 * @s: buffer to print to
 * @b: byte to print
 * @n: number of bytes to fill
 *
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *str;
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	str = s;

	return (str);
}
