#include "main.h"
/**
 * _isalpha - function
 * @c: parameter
 * Return: 0 when success
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 128))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
