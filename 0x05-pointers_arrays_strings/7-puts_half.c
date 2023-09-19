#include "main.h"

/**
  * puts_half - function name
  * @str: function parameter
  */

void puts_half(char *str)
{
	int k;
	int h;
	int count = 0;

	for (k = 0; str[k] != '\0'; k++)
	{
		count++;
	}
		h = (count - 1) / 2;
	for (k = h + 1; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
		_putchar('\n');
}
