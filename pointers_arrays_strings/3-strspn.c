/*
 * File: nom du fichier
 * Auth: mohammed
 */

#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: segment initial.
 * @accept: bytes.
 *
 * Return: the number of bytes in the initial segment of s which 
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int lenght = 0;
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				lenght++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (lenght);
			}
		}
		s++;
	}
	return (lenght);
}
