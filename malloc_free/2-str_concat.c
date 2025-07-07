/*
 * File: 2-str_concat.c
 * Auth: mohammed
 */

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  function that concatenates two strings.
 * @s1: first string
 * @s2: seconde string
 *
 * Return: pointer should point to a newly allocated space in memory
 * NULL on failure
 */

/**
 * my_strlen - fonction remplace la commande strlen
 * @str: string
 *
 * Return: len
 */

size_t my_strlen(char *str)
{
	size_t len = 0;

	if (!str)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}

char *str_concat(char *s1, char *s2)
{
	size_t i = 0;
	size_t j = 0;
	char *result;

	size_t len1 = s1 ? my_strlen(s1) : 0;
	size_t len2 = s2 ? my_strlen(s2) : 0;

	result = (malloc(len1 + len2 + 1));
	if (!result)
		return (NULL);

	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		result[i++] = s2[j++];
	}


	result[i] = '\0';

	return (result);
}
