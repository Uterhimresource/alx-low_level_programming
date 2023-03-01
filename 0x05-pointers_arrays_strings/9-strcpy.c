#include "main.h"
/**
 * _strcpy - function to make copy
 * @dest: file to
 * @src: file from
 * Return: coppied
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
