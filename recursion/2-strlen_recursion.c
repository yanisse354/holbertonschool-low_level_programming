/*
 * File: 2-strlen_recursion.c
 * Auth: mohammed.
 */

#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string.
 * @s: The string to be printed
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}
