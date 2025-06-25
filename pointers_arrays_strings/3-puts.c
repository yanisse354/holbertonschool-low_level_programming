/*
 * File: 3-puts.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout
 * @str: string will be print
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
