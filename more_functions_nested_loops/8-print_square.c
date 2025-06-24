/*
 * File: 8-print_square.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @n: The number of # characters to be printed.
 */

void print_square(int size)
{
	int len;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
			_putchar('#');
	}

	_putchar('\n');
}
