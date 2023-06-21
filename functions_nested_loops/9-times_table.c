#include "main.h"

/**
 * times_table - print table 9 since 0
 * Return: void
 */
void times_table(void)
{
	int x, y, som, last;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		for (y = 1; y < 10; y++)
		{
			som = (x * y);
			last = som % 10;

			if (som <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + last);
			}
			else if (som > 9)
			{
				while (som >= 10)
				{
					som = som / 10;
				}
				_putchar(' ');
				_putchar('0' + som);
				_putchar('0' + last);
			}
			if (y != 9)
			_putchar(',');
		}
		_putchar('\n');
	}
}
