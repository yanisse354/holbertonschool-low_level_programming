/*
 * File: nom du fichier
 * Auth: mohammed
 */

#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * @n: to coppy
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];

		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';

		i++;
	}
	return (dest);
}
