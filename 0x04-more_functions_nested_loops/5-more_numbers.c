#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: no return
 */

void more_numbers(void)
{
	int num, a;

	for (a = 0; a <= 10; a++)
	{
		for (num = 0; num <= 15; num++)
		{
			if num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}

		_putchar('\n');
	}
}
