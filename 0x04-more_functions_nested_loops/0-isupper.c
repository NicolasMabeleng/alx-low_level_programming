#include "main.h"

/**
 * isupper - check the code
 * @c: input character
 * Return: 1 if c is uppercase
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
