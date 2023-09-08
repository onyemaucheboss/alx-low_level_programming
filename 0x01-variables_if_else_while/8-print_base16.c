#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints all the numbers of base 16 (hexadecimal)
 * in lowercase, followed by a new line, using the putchar function.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char hex_digit;

	hex_digit = '0';
	while (hex_digit <= '9')
	{
		putchar(hex_digit);
		hex_digit++;
	}

	hex_digit = 'a';
	while (hex_digit <= 'f')
	{
		putchar(hex_digit);
		hex_digit++;
	}

	putchar('\n');

	return (0);
}
