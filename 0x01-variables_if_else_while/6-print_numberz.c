#include <stdio.h>
/**
 * main - prints 0 to 9 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number);
		number++;
	}
	printf("\n");

	return (0);
}

