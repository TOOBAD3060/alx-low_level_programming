#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: counts arguments
 * @argv: pointer to array of args
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	int res;

	if (argc > 1)
	{
		res = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

