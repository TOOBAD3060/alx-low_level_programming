#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number whose root is to be determined
 * Return: -1 if n has nor square root
 */

int square_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return root;
	return (square_root(n, root + 1));
}


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}
