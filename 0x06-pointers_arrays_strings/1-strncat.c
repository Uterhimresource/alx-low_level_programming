#include "main.h"
/**
 * _strncat - pointer function
 * @dest: pointer variable for string
 * @src: pointer variable
 * @n: integer number
 * Return: concatenate string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, s = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[s] != '\0' && s < n)
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	return (dest);
}
