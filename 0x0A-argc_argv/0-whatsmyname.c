#include <stdio.h>
#include "main.h"

/**
 * main - prints name of program
 * @argc: counts arguments
 * @argv: pointer to array of arguments
 * Return: 0(Always success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n",argv[0]);

	return (0);
}

