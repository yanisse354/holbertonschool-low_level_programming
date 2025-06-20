/*
 * File: 11-print_to_98.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * followed by a new line.
 *
 * Return: the natural numbers 98
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if(n < 0)
			n *= -1;

		if (n >= 10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar(n + '0');
		}

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}

		n++;
	}

	_putchar('\n');
}
