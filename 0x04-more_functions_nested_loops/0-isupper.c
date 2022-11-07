#include "main.h"

/**
 * isupper - check if character is uppercase
 * @c: input character
 * Return: 1 if c is uppercase, 0 otherwise
 */

int isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
