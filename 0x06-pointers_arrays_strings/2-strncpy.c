#include "main.h"

/**
 * _strncpy - Copies at most n bytes from source to destination
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to copy from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
