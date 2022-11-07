#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: no return
 */

void more_numbers(void)
{
	int num, a;

	for (num = 0; num < 10; num++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}

		_putchar('\n');
	}
}
