/*
 * File: 6-print_line.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *@n: The number of _ characters to be printed.
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
