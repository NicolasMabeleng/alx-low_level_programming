#include "main"
/**
 * _memset -fill a block of memory with a specifc value
 * @s: pointer
 * @b: hexadecimal number
 * @n: number of bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *u = (unsigned char *) s;

	while (n-- > 0x00)
	{
		*u++ = b;
	}
	return (s);
}
