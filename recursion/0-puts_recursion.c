/**
 * File: 0-puts_recursion.c
 * Auth: mohammed.
 */

#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: pointe to an string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
