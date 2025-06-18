/*
 * File: 0-holberton.c
 * Auth: Brennan D Baraban
 *
 */

#include "main.h"
#include <unistd.h>

/**
 * main - Prints "putchar" followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str = "putchar\n";
	write(1, str, 7);

	return (0);
}
