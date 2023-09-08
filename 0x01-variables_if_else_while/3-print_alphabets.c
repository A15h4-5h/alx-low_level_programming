#include <stdio.h>

/**
 * main - this is the function of this task
 * Return: 0
 */

int main(void)

{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	putchar(p);

	for (p = 'A'; p <= 'Z'; p++)
	putchar(p);
	putchar('\n');

	return (0);

}
