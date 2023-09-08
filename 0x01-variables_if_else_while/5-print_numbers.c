#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints all single-digit numbers of base 10
 * starting from 0, followed by a new line, using the putchar function.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
