/*
 * File: nom du fichier
 * Auth: mohammed
 */

#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: pointer of chain string
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char t1[] = "aAeEoOtTlL";
	char t2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; t1[j] != '\0'; j++)
		{
			if (str[i] == t1[j])
			{
				str[i] = t2[j];
			}
		}
	}

	return (str);
}
