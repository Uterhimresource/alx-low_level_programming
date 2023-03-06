#include "main.h"
/**
 * _strpbr - function that count length of character
 * @s: actual string
 * @accept: string to be searched
 * Return: length of string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		if (*(accept + j) != '\0')
		return (s + i);
	}
	return (0);
}
