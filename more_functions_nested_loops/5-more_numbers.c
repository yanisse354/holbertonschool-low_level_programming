/*
 * File: 5-more_numbers.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by new line
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i,t;

	for (t = 0; t <= 10; t++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}

	_putchar('\n');
	}
}
