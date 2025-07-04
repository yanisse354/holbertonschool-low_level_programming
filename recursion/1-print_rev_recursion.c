/*
 * File: 0-puts_recursion.c
 * Auth: mohammed.
 */

#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: The string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
