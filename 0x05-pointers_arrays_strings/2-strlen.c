#include "main.h"

/**
  * _strlen - name of the function
  * @s: function parameter
  * Return: the length of the string
  */

int _strlen(char *s)
{
	int x;
	int count = 0;

	for (x = 0; s[x] != '\0'; x++)
		count++;
	return (count);
}
