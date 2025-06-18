/*
 * File: 0-putchar.c
 * Auth: mohammed
 *
 */

#include "main.h"
#include <unistd.h>

/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str = "_putchar\n";
	write(1, str, 9);

	return (0);
}
