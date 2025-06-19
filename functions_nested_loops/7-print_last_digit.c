/*
 * File: 7-print_last_digit.c
 * Auth: mohammed
 */

#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: The character to be checked.
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	if (n < 0000)
	n*= -1;
	_putchar(n + '0');
		return (n);
}
