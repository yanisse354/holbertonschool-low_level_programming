/*
 * File: 0-isupper.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 *
 * Return: Returns 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'a' && c >= 'Z')
		return(1);
	else
		return(0);
}
