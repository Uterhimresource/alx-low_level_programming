#include "main.h"
/**
 * _islower - function
 * @c: parameter
 * Return: 0 when success
 */
int _islower(int c)
{
	if (c > 96 && c < 128)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
