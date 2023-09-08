#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints the alphabet in lowercase, excluding the
 * letters 'q' and 'e', followed by a new line, using the putchar function.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}

