#include <stdio.h>
/**
 * main - prints 0 to 9 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	for(number=0; number<10; number++)
	{
		putchar(number);
	}
	printf("\n");

	return (0);
}

