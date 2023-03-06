#include "main.h"
/**
 * _strspn - function that count length of character
 * @s: actual string
 * @accept: string to be searched
 * Return: length of string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
	if (*(accept + j) == '\0')
		break;
	}
	return (i);
}
