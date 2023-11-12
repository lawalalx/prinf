/**
 * _strlen - calculates the length of a string
 * @str: the input string
 *
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}

