#include "main"
/**
 * _memset -fill a block of memory with a specifc value
 * @s: pointer to the memory area to be filled
 * @c: Character to fill the memory area with
 * @n: max bytes to use
 * Return: A pointer to the filled memory area @s
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *m = s, value = c;

	for (i = 0; i < n; i++)
	{
		m[i] = value;
	}
	return (m);
}
