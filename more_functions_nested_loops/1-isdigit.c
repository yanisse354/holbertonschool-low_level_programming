/*
 * File: 1-isdigit.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * _isdigit -  function that checks for a digit (0 through 9)
 * @c: the character to be checked.
 *
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
