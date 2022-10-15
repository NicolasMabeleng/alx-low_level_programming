#include <stdio.h>
/**
 * main = program entry point
 * Return: 0 success, non-zero fail
 */
int main(void)
{
	int a, i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				if (i < j && j < m)
				{
					putchar(i);
					putchar(j);
					putchar(a);
					if (i == '7' && j == '8' && a == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
