#include <stdio.h>
/**
  * main - print the first few fibonacci numbers.
  * Return: 0 when success
  */
int main(void)
{
	unsigned long ctr, n1, n2, n3, s;

	n1 = 0;
	s = 0;
	n2 = 1;
	for (ctr = 0; ctr < 50; ctr++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (n3 % 2 == 0 && n3 < 4000000)
		{
			s = s + k;
		}
	}
	printf("%lu", s);
	return (0);
}
