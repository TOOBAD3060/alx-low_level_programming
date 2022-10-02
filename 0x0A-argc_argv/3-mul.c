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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

