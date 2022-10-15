#include <stdio.h>
/**
 * main - serves as the entry point
 * Return: 0 success, non-zero fail
 */
int main(void)
{
	int i, k;

	for (i = 0; i < 99; i++)
	{
		for (k = i + 1; k <= 99; k++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);

			putchar(' ');

			putchar('0' + k / 10);
			putchar('0' + k % 10);

			if (i == 98 && k == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
