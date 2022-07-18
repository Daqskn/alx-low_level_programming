/**
 * _memset - fill mem with constant byte
 * @s: pointer to mem area 's'
 * @b: constant byte to fill
 * @n: number of bytes to fill
 * Return: pointer to mem area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = ; i < n; i++)
		s[i] = b;
	return (s);
}
