#include "main.h"

/**
  * reverse_array - The main faunction
  *
  * @a: Function parameter
  *
  * @n: Function parameter
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int a1, b1;

	for (a1 = 0; a1 < n--; a1++)
	{
	b1 = a[a1];
	a[a1] = a[n];
	a[n] = b1;
	}
}
