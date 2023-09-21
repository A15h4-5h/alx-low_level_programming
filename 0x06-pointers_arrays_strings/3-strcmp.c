#include "main.h"

/**
  * _strcmp - function name
  * @s1: parameter 1
  * @s2: parameter 2
  * Return: a string
  */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			if (s1[x] < s2[x])
				return (s1[x] - s2[x]);

				else if (s2[x] < s1[x])
				return (s2[x] - s1[x]);
		}
	}
		return (0);
}

