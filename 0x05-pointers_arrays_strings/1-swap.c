#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps a and b
 * @a: val to swap
 * @b: val to swap
 */
void swap_int(int *a, int *b)
{
	int tmp = 0;

	*a = tmp;
	*b = *a;
	*b = tmp;
}
