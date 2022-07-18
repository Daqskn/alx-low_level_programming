/**
 * _memcpy - copy mem area
 * @dest: points to dest mem area
 * @src: points to source mem area
 * @n: number of bytes to copy
 * Return: pointer to dest mem area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
