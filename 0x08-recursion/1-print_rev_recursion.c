#include "main.h"
/**
 * _print_rev_recursion - function to print string character in reverse
 * @s: string variable
 * Return - nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
