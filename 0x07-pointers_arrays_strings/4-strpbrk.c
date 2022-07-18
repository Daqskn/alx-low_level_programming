/**
 * _strpbrk - search for string of any set of bytes
 * @s: pointer to string to search through
 * @accept: array of bytes to search
 * Return: pointer to the byte in s that matches one of the byte in accept
 * or NULL if no bytes found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
