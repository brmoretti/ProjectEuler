#include <stdio.h>

char	ft_int_to_str(int nb, char *str);
int		ft_is_palindrome(char	*str);

int	main(void)
{
	int		n1;
	int		n2;
	char	number[7];
	int		max;

	n1 = 999;
	max = 0;
	while (n1 >= 100)
	{
		n2 = n1;
		while (n2 >= 100)
		{
			ft_int_to_str(n1 * n2, number);
			if (ft_is_palindrome(number) && n1 * n2 > max)
				max = n1 * n2;
			n2--;
		}
		n1--;
	}
	printf("%d\n", max);
}
