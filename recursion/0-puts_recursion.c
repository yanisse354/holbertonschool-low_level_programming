/*
 * File: 0-puts_recursion.c
 * Auth: mohammed.
 */

#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: The string to be printed
 *
 * Description: This function prints a string recursively,
 * using the _putchar function. It prints one character at a time
 * followed by a newline when the end of the string is reached.
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
