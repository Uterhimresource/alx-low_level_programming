#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse function
 * @s: variable that represent character data
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, c = 0;

	char *r = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		c++;
	}

	for (i = c; i >= 0; i--)
	{
		s = r[i];
	}
}
