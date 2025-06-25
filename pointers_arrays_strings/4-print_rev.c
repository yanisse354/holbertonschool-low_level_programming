/*
 * File: 4-print_rev.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (len = - 1; len <= 0; len--)
		_putchar(s[index]);

	_putchar('\n');
}
