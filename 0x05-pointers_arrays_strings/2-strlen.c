#include "main.h"
/**
 * _strlen - swap function
 * @s: second variable of parameter
 * Return: length of character
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (*s != '\0')
	{
		c = c + 1;
		s++;
	}
	return (c);
}
