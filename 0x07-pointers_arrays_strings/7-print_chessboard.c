#include "main.h"
/**
 * print_chessboard - board to print
 * @a: prints things
 * Return: returns output
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			m = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n');
}
