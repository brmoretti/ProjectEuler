#include <stdio.h>

void	next_sum_1000(int *a, int *b, int *c)
{
	if (*c - *b > 2)
	{
		(*c)--;
		(*b)++;
	}
	else
	{
		(*a)++;
		*b = *a + 1;
		*c = 1000 - *a - *b;
	}
}

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 1;
	b = 2;
	c = 1000 - a - b;
	while (a * a + b * b != c * c)
		next_sum_1000(&a, &b, &c);
	printf("%d\n", a * b * c);
	return (0);
}
