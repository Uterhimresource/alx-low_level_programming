#include "main.h"
/**
 * _isupper - function
 * @c: parameter
 * Return: 0 when success
 */
int _isupper(int c)
{
	if (c > 96 && c < 128)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
