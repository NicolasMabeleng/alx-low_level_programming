#include "main.h"

/**
 * isupper - check if character is uppercase
 * @c: input character
 * Return: 1 if c is uppercase, 0 otherwise
 */

int isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
