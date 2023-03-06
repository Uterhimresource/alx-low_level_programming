#include "main.h"
/**
 * _strchr - strchar function
 * @s: actual string
 * @c: character to be replaced
 * Return - success
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else 
		return (0);
}
