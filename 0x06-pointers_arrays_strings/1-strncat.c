#include "main.h"

/**
  * _strncat - name of the function
  * @dest: parameter 1
  * @src: parameter 2
  * @n: parameter 3
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int x;

	for (x = 0; x < n && *src != '\0'; x++)
	{
		dest[len + x] = *src;
		src++;
	}
		dest[len + x] = '\0';
		return (dest);
}
