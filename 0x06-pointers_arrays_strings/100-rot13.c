/**
 * rot13 - Encodes a string using rot13.
 * @s: The input string.
 *
 * Return: The encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (alphabet[j] != '\0')
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
