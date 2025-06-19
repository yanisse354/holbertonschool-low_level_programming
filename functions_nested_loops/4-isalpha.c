/*
 * File: 4-isalpha.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * _isalpha -  function that checks for alphabetic character.
 * @c: The character to be checked.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
