#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: counts argument
 * @argv: pointer to array of arguments
 * Return: o on success
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
