/*
 * File: nom du fichier 
 * Auth: mohammed
 */

#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @n: function copies
 * @src: bytes from memory area
 * @dest: to memory area
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
