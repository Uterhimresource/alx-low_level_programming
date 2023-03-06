#include "main.h"
/**
 * _memset - memset function
 * @s: string variable
 * @b: variable that hold data to be filled
 * @n: size
 * Return - success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

