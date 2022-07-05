#include "main.h"

/**
 * times_table - 9 times table
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;

			if (b == 0)
				-putchar(c + '0');
			if (b != 0 && c < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}