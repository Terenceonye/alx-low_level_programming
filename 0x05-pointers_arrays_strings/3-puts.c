#include "main.h"

/**
* _puts - prints any string to stdout
* @str: ponter variable of type char
* Return: Nothing
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
