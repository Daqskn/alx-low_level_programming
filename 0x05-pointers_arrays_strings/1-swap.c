#include "main.h"

/**
 * swap - sawp ints with pointers
 * @a,@b
 * retur: void
 */
void swap_int(int *a, int *b)
{
	int x;
	
	x = *a;
	*a = *b;
	*b = x;
	return ;
}
