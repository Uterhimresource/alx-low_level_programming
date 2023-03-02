#include "main.h"
/**
 * _strncpy - pointer function
 * @dest: pointer variable for string
 * @src: pointer variable
 * @n: integer number
 * Return: concatenate string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s = 0, c = 0;

	while (src[c] != '\0')
	{
		c++;
	}
	while (src[s] != '\0' && s < n)
	{
		dest[s] = src[s];
		s++;
	}
	if (c <= n)
		dest[s] = '\0';
	return (dest);
}
