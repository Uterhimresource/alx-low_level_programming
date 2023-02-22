#include <stdio.h>
/**
  * main - print the multiples of 3, 5  below 1024.
  * Return: 0 when success
  */

int main(void)
{
	int n, res;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			res += n;
		}
	}
	printf("%d\n", res);
	return (0);
}

