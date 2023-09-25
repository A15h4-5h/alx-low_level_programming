#include "main.h"

/**
  * _memset - function name
  * @s: parameter 1
  * @b: parameter 2
  * @n: parameter 3
  * Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}
		return (s);
}

