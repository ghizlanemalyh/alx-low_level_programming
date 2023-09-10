#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int Digit1 = 0, Digit2;
while (Digit1 <= 99)
{
Digit2 = Digit1;
while (Digit2 <= 99)
{
if (Digit2 < Digit1)
{
putchar((Digit1 / 10) + 48);
putchar((Digit1 % 10) + 48);
putchar(' ');
putchar((Digit2 / 10) + 48);
putchar((Digit2 % 10) + 48);
{
if (Digit1 != 98 || Digit2 != 99)
{
putchar(',');
putchar(' ');
}
Digit2++;
Digit1++;
}
}
}
}
putchar('\n');
return (0);
}
