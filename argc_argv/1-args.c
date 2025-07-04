/*
 * File: 0-whatsmyname.c
 * Auth: mohammed
 */

#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */

int main(int argc, char *argv[])
{
	int i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}
	return(0);
}
