/*
 * File: 8-print_array.c
 * Auth: mohammed
 */

#include "main.h"
#include "stdio.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: variable
 * @n: elements of an array of integers
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
