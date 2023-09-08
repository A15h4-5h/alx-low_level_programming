#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints char below 10
 * Return: always 0
 */

int main(void)

{
	int z;

	for (z = 0; z < 10; z++)
	{
		putchar(z + '0');
	}
	putchar('\n');
	return (0);
}
