/*
 * File: 0-isupper.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: The character to be checked.
 *
 * Return: Returns 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
			return (0);
}
