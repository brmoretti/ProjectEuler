#include <stdio.h>
#include <stdlib.h>

int	ft_read_string(char **number)
{
	FILE	*file;

	*number = malloc(1001 * sizeof(char));
	if (*number == NULL)
		return (0);
	file = fopen("number.txt", "r");
	if (file == NULL)
	{
		free(*number);
		return (0);
	}
	if (fgets(*number, 1001, file) == NULL)
	{
		fclose (file);
		free (*number);
		return (0);
	}
	fclose (file);
	return (1);
}

unsigned long int	ft_product_13(char *number)
{
	unsigned long int	prod;
	int					i;

	prod = 1;
	i = 0;
	while (i < 13)
	{
		prod *= number[i] - '0';
		i++;
	}
	return (prod);
}

unsigned long int	ft_largest_product(char *number)
{
	unsigned long int	prod;
	unsigned long int	max;

	max = 0;
	while (*(number + 12))
	{
		prod = ft_product_13(number);
		if (prod > max)
			max = prod;
		number++;
	}
	return (max);
}

int	main(void)
{
	char	*number;

	if (!ft_read_string(&number))
		return (1);
	printf("%lu\n", ft_largest_product(number));
	free (number);
}
