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
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n )
	{
		dest[i] = src[j];
		
		i++;
		j++;
	}
	return (dest);
}
