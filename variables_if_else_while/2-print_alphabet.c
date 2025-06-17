/*
 * file: 2-print_alphabet.c
 * auth: mohammed
 */

#include <stdio.h>

/**
 * main - print the alphabet in lowercase.
 *
 * return always: o
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter ++)
		putchar(letter);

	putchar('\n');

	return (0);
}
