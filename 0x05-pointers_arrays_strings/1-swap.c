#include "main.h"

/**
 * swap_int - function that swap the value of two integers
 * @a : the first integer to be swapped
 * @b : the second integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

