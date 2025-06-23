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
	int num, count;

	for (count = 0; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}

	_putchar('\n');
	}
}
