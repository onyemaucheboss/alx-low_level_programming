/**
 * leet - Encodes a string into 1337.
 * @s: The input string.
 *
 * Return: The encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
