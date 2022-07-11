#include "main.h"

/**
 * rev_string - reversre string
 * @s:string
 * return:void
 */
void rev_str(char *s)
{
	int i, j;
	char a[500];

	i = 0;
	j = 0;

	while(*(s  + i))
	{
		*(a + i) = *(s + i);
		i++;
	}
	while(i >= 0)
	{
		*(s +i) = *(a + j);
		j++;
		i--;
	}
}
