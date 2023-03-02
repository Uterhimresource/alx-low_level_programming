#include "main.h"
/**
 * _strcmp - pointer function
 * @s1: pointer variable for string
 * @s2: pointer variable
 * Return: compare
 */
int _strcmp(char *s1, char *s2)
{
	int i, s = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			s = s1[i] - s2[i];
			break;
		}
	}
	return (s);
}
