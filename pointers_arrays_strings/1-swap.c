/*
 * File: 1-swap.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: values of to integers.
 * @b: values of to integers.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
