/*
 * File: 4-print_most_numbers.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 * followed by new line
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}

	_putchar('\n');
}
