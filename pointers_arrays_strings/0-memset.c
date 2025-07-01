/*
 * Fille: nom du fichier
 * Auth: mohammed
 */

#include "main.h"

/**
 * _memset -  function that fills memory with a constant byte.
 * @n: bytes of the memory
 * @s: memory area pointer
 * @b:  the constant byte
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
