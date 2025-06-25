/*
 * File: 2-strlen.c
 * Auth: mohammed
 */

#include "main.h"
#include <stddef.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;

	return (lenght++);
}
