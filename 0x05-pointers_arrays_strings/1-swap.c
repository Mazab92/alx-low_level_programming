#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: integer to a swap
 * @b: integer to a swap
 */

void swap_int(int *a, int *b)

{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
