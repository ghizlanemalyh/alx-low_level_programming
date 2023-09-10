#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int Digit2, Digit1;
for (Digit1 = 0; Digit1 <= 99; Digit1++)
{
for (Digit2 = 0; Digit2 <= 99; Digit2++)
{
if (Digit1 < Digit2 && Digit1 != Digit2)
{
putchar((Digit1 / 10) + '0');
putchar((Digit1 % 10) + '0');
putchar(' ');
putchar((Digit2 / 10) + '0');
putchar((Digit2 % 10) + '0');
if (Digit1 != 98 || Digit2 != 99)
{
`putchar(',');
putchar(' ');
}
Digit2++;
}
Digit1++;
}
}
putchar('\n');
return (0);
}
