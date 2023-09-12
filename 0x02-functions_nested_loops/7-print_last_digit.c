#include "main.h"


/**
 * print_d - entry point
 *
 *
 * @a:number to compute d
 *
 * Return: d
 */


int print_d(int a)
{
int d;


d = a % 10;
if (d < 0)
{
d = d * -1;
}
_putchar(d + '0');
return (d);
}
