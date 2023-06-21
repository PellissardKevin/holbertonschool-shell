#include <stdio.h>
#include <ctype.h>

/**
 * main - combine number between us
 * Return: 0 alway success
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x < y)
			{
				putchar(48 + x);
				putchar(48 + y);
				if (x != '8' || (x == '8' && y != '9'))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
