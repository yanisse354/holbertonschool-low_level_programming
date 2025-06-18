/*
 * File: 1-alphabet.c
 * Auth: mohammed
 */

#include <stdio.h>

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always O.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

}

int main(void)
{
	print_alphabet();

	return 0;
}
