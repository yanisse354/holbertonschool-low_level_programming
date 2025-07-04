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

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}
