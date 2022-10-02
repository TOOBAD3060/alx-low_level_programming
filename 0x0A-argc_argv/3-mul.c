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

	if (argc > 1 && argc < 4)
	{
		
		printf("%d\n", argv[1] * argv[2]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

