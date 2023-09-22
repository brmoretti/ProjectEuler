#include <stdio.h>

unsigned long long int	ft_n_divisors(unsigned long long int nb)
{
	int						n_divisors;
	unsigned long long int	i;
	int						increment;
	unsigned long long int	half_nb;

	n_divisors = 2;
	i = 1;
	increment = 1;
	half_nb = nb / 2;
	if (nb > 2 && nb % 2 != 0)
		increment = 2;
	while (i < half_nb)
	{
		if (nb % i == 0)
			n_divisors++;
		i += increment;
	}
	return (n_divisors);
}

void	ft_next_even_triangle(unsigned long long int *i,
						unsigned long long int *triangle)
{
	(*i)++;
	*triangle += *i;
	if (*triangle % 2 != 0)
		ft_next_even_triangle(i, triangle);
}

int	main(void)
{
	unsigned long long int	i;
	unsigned long long int	triangle;

	i = 1;
	triangle = 1;
	while (ft_n_divisors(triangle) <= 500)
		ft_next_even_triangle(&i, &triangle);
	printf("%lld\n", triangle);
	return (0);
}
