#include "main.h"

/**
  * _strncpy - name of the function
  * @dest: parameter 1
  * @src: parameter 2
  * @n: parameter 3
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n && src[l] != '\0'; l++)
	{
		while (l < n)

		dest[l] = '\0';
		l++;

	}
		return (dest);
}
