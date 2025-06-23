/*
 * File: 7-print_diagonal.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: The number of _ characters to be printed.
 */

void print_diagonal(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < 0; len++)
			_putchar('\\');
	}

	_putchar('\n');
}
