#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 */

void more_numbers(void)
{
	int i = 0;

	int j;

	while (i <= 10)
	{
		for (j = 0; j < 15; j++)
			_putchar(j + '0');
		i++;
	}

	_putchar('\n');
}
