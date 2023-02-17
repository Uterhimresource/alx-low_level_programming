#include <stdlib.h>
#include <time.h>
/**
 * main - func
 * @n: variable
 * Description: integer number is negativ orpositive
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%d is positive");
	}
	else if(n < 0)
	{
		printf("%d is negative");
	}
	else
	{
		prinf("%d is zero");
	}
	return (0);
}
