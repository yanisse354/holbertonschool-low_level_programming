/*
 * File: 4-pow_recursion.c
 * Auth: mohammed.
 */

#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power of y.
 * @y: value
 * @x: value
 *
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int i = 0;
	int sum = 1;

	if (y < 0)
	{
		return (-1);
	}
	for (i = 0; i < y; ++i)
		sum *= x;
	return (sum);
}
