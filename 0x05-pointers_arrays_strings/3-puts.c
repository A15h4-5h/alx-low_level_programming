#include "main.h"

/**
  * _puts - function name
  * @str: function parameter
  */

void _puts(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	_putchar(str[l]);
	_putchar('\n');
}
