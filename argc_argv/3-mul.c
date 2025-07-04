/*
 * File: 2-args.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc != 3)
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);

}
