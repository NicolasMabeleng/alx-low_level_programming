#include "main.h"

/**
 * print_sign - prints the sign of a member
 * @n: the number of the sign to be printed
 * Return: 1 if number is greater than 0, -1 if number is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

