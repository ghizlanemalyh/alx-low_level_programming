#include "main.h"

/**
 * print_times_table - A function that prints the n times table.
 * 
 * Return: Always 0 (success).
*/

void print_times_table(int n)
{
	int a = 0, b, c;

	if (n > 15 || n < 0)
		return;
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (c > 99)
			{
				_putchar(c / 100 + '0');
				_putchar((c / 10 % 10) + '0');
				_putchar(c % 10 + '0');
			}
			else if (c > 9)
			{
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else
				_putchar(c + '0');

			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
