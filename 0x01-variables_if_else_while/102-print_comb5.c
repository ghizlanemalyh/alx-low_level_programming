#include <stdio.h>
 
int main(void)
{
int Digit2, Digit1;

while (Digit1 < 100)
         {
Digit1 = 0;
while (Digit2 < 100)
{
Digit2 = 0;
if (Digit1 < Digit2)
{
putchar((Digit1 / 10) + 48);
putchar((Digit1 % 10) + 48);
putchar(' ');
putchar((Digit2 / 10) + 48);
putchar((Digit2 % 10) + 48);
if (Digit1 != 98 || Digit2 != 99)
{
putchar(',');
putchar(' ');
}
}
Digit2++;
}
Digit1++;
}
putchar('\n');
return (0);
}
