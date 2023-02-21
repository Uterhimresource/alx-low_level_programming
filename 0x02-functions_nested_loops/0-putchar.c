#include "main.h"
/**
 * main - main function
 * Description: print putchar
 * Return: 0 when success
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
