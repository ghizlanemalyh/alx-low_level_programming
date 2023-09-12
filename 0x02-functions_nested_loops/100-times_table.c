#include "main.h"


/**
  * print_times_table - printsthe times inputed
  *
  *@a: the value of the timea table printed
  */


void print_times_table(int a)
{


	int num, mult, prod;


	if (a >= 0 && a <= 15)
	{
	for (num = 0; num <= a; num++)
	{
	_putchar('0');
	for (mult = 1; mult <= a; mult++)
	{
	_putchar(',');
	_putchar(' ');
	prod = num * mult;
	if (prod <= 99)
	_putchar(' ');
	if (prod <= 9)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
	_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
