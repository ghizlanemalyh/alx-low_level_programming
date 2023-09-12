#include "main.h"
/**
 * print_alphabet - make the alphabet
 *
 * Return:Always 0 (Success)
 */

int print_alphabet(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
_putchar(ch);
}
_putchar('\n');
return (0);
}
