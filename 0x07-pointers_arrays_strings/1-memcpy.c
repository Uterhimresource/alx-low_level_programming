#include "main.h"
/**
 * _memcpy - memset function
 * @dest: string variable
 * @src: variable that hold data to be filled
 * @n: size
 * Return - success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

