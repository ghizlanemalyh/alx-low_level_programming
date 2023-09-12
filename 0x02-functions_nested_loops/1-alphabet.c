#include "main.h"

/**
 * print_alphabet - make the alphabet
 * Return: 0
 */

int print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
