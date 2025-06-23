/*
 * File: 3-print_numbers.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 * followed by new line
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
