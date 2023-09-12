#include "main.h"


/**
  * print_times_table - printsthe times inputed
  *
  *@a: the value of the timea table printed
  */


void print_times_table(int a)
{


	int c, m, p;


	if (a >= 0 && a <= 15)
	{
	for (c = 0; c <= n; c++)
	{
	_putchar('0');
	for (m = 1; m <= a; m++)
	{
	_putchar(',');
	_putchar(' ');
	p = c * m;
	if (p <= 99)
	_putchar(' ');
	if (p <= 9)
	_putchar(' ');
	if (p >= 100)
	{
	_putchar((p / 100) + '0');
	_putchar(((p / 10)) % 10 + '0');
	}
	else if (p <= 99 && p >= 10)
	{
	_putchar((p / 10) + '0');
	}
	_putchar((p % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
