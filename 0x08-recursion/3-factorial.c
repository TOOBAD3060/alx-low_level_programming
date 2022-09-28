#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: numbers whose factorial is to be determined
 * Return: (-1) when n is less than 0,
 * 1 when n is 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
