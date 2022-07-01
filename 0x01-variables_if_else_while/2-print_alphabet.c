#include <stdio.h>

/**
 * main - Prints a to c, one character at a time.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		putchar(character);

	putchar('\n');

	return (0);
}
