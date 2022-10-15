#include <stdio.h>
/**
 * main - serves as the Entry point
 * Return: 0 if no error, non-zero if error
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number == '9')
		{
			break;
		}
		else
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
