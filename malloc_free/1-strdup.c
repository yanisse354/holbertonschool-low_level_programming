/*
 * File: 1-strdup.c
 * Auth: mohammed
 */

#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Write a function that returns a pointer to a newly 
 * allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the chaine character to duplicate
 *
 * Return: NULL if str = NUL
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
    unsigned int length = 0;
    char *copy;
    unsigned int i = 0;

    if (str == NULL)
        return (NULL);

    while (str[length] != '\0')
        length++;

    copy = malloc(sizeof(char) * (length + 1));
    if (copy == NULL)
        return (NULL);

    for (i = 0; i < length; i++)
        copy[i] = str[i];

    copy[length] = '\0';

    return (copy);
}

