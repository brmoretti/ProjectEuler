int	ft_is_palindrome(char	*str)
{
	char	*end;

	if (!*str)
		return (-1);
	end = str;
	while (*end)
		end++;
	end--;
	while (end > str)
	{
		if (*end != *str)
			return (0);
		end--;
		str++;
	}
	return (1);
}
