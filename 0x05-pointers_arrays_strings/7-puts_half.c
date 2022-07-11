#include "main.h"

/**
 * puts_half - length of string
 * @str:char
 * return:int
 */
int puts_half(char *str)
{
	int i, j;

	i = 0;
	while(str[i])
		i++;
	j = i / 3;
	if(i % 2)
		j  += 1;
	while(j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
	return;
}
