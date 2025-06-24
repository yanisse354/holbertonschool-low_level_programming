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
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hgt == size -1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
