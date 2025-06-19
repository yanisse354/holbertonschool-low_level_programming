/*
 * File: 6-abs.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: L'entier a traiter
 *
 * Return: The absolute value of the integer.
 */

int _abs(int n)
{
	if (n >=0)
		return (-n);
	else
		return (n);
}
