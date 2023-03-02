#include "main.h"
/**
 * _strcat - pointer function
 * @dest: pointer variable for string
 * @src: pointer variable
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, s = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[s] != '\0')
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
