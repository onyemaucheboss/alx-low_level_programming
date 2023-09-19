#include "main.h"

/**
 * puts2 - function should print only one character out of the two
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int length = 0;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Print every other character */
	for (int i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n'); /* Print a new line character */
}
