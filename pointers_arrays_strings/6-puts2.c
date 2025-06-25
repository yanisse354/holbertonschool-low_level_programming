/*
 * File: 6-puts2.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * puts2 -  function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: character of a string.
 */

void puts2(char *str)
{
	int len = 0, index = 0;

	while (str[index++])
		len++;
	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
