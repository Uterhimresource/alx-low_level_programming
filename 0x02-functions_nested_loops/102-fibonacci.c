#include <stdio.h>
/**
  * main - print the first few fibonacci numbers.
  * Return: 0 when success
  */
int main(void)
{
	unsigned long ctr, n1, n2, n3;

	n1 = 0;
	n2 = 1;
	for (ctr = 0; ctr < 50; ctr++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%lu", n3);
		if (ctr == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
