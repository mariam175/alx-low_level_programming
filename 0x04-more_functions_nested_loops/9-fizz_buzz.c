#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("%s", buzz);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", fizzbuzz);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", fizz);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", buzz);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
