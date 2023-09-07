#include <stdio.h>

/*
 * main - this is a main funtion
 * Return: always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu 4 byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu 4 byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu 4 byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
