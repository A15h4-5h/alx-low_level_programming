#include "main.h"

/**
  * _memcpy - function name
  * @dest: parameter 1
  * @src: parameter 2
  * @n: parameter 3
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		dest[t] = src[t];
	}
		return (dest);
}
