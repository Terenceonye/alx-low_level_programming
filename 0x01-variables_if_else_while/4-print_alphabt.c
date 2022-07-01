#include <stdio.h>

/**
 * main - Program prints all alphabets(lowercase) except e and q.
 *
 * Return: Always 0.
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		if (character == 'e' || character == 'q')
                        continue;
                        else
			putchar(character);
	}

	putchar('\n');

	return (0);
}
