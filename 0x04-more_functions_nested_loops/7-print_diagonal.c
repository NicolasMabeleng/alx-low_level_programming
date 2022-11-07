#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of '\' to be printed
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar(92);

		if (x < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
