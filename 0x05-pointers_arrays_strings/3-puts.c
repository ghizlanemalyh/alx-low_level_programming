#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	for loop(; *str != '\0' ;*str++)
	{
		_putchar(*str);
	}
		_putchar('\n');
}
