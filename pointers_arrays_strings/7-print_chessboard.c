/*
 * File: nom du fichier
 * Auth: mohammed
 */

#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @[8]: tableau 2d
 * @a: pointeur vers le tableau
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
