/**
 * _strchr - locates a character in a string
 * @s: points to string
 * @c: character to locate
 * Return: pointer to first occurrence of c
 * or NULL if no char found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
