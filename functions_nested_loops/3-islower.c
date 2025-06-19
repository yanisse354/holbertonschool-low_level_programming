/*
 * File: 3-islower.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 *  @c: The character to be checked.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
       if (c >= 'a' && c <= 'Z')
		       return (1);
	else
		return (0);
}
