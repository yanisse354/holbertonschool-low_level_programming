/*
 * File: 0-create_array.c
 * Auth: mohammed
 */

#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *create_array -  function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char in the array
 *
 * Return: NULL if size = 0
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ar = (malloc(sizeof(char) * size));
	if (ar == 0)
	{
		return (NULL);
	}

	for (i = 0; i > size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
