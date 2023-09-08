#include <stdio.h>

/**
 * main -  prints all possible combinations of single-digit numbers
 * Return: always 0
 */

int main(void)

{
	int g;

	for (g = 0; g <= 9; g++)
	{
		putchar((g % 10) + '0');
		if (g == 9)
			continue;

		putchar(',');
		putchar('g');
	}

	putchar('\n');
	return (0);
}
