#include "main.h"
#include <stdlib.h>
/**
* _calloc - function of calloc
* @nmemb: string var
* @size: var for size
* Return: Pointer result
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, d;

	d = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(d);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (d); i++)
	{
		p[i] = 0;
	}
	return (p);
}