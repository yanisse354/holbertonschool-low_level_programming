/*
 * File: nom du fichier
 * Auth: mohammed
 */


#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string 
 * @accept: bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
