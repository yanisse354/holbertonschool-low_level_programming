/*
 * File: non du fichier
 * Auth: mohammed
 */

#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: chaine de caractere n1
 * @s2: chaine de caractere n2
 *
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

		i++;
	}
	return (s1[i] - s2[i]);
}
