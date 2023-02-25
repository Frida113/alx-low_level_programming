#include <stdio.h>
/**
 * main - Prints the first 98 fibbonaci numbers
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (1)
	{
		next = a + b;
		a = b;
		b = next;

		if (next % 2 == 0)
		{
			sum += next;
		}

		if (next > 4000000)
		{
			break;
		}
	}

	printf("%i\n", sum);
	return (0);
}
