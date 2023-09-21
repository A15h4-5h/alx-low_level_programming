#include "main.h"

/**
  * reverse_array - function name
  * @a: first parameter
  * @n: second parameter
  * Return: 0
  */

void reverse_array(int *a, int n)
{
	int q;
	int w;

	for (q = 0; q < n / 2; q++)
	{
		w = a[q];
		a[q] = a[n];
		a[n] = w;
	}
}
