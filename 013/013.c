/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   013.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:30:33 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 19:38:01 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_malloc_text(int cols, int rows);
void	ft_free_text(char **text, int rows);
int		ft_read_number(char **text);

unsigned long long int	ft_sum_columns(char **text, int col)
{
	int	i;
	int	sum;

	sum = 0;
	i = -1;
	while (++i < 100)
		sum += text[i][col] - '0';
	return (sum);
}

void	ft_treat_to_10_digits(unsigned long long int *nb, int *pow)
{
	while (*nb > 10000000000)
	{
		*nb /= 10;
		*pow /= 10;
	}
}

int	main(void)
{
	char					**text;
	unsigned long long int	first_10_digits;
	int						col_pow;
	int						i;

	text = ft_malloc_text(52, 101);
	ft_read_number(text);
	first_10_digits = 0;
	col_pow = 1;
	i = 50;
	while (--i >= 0)
	{
		first_10_digits += ft_sum_columns(text, i) * col_pow;
		col_pow *= 10;
		ft_treat_to_10_digits(&first_10_digits, &col_pow);
	}
	printf("%llu\n", first_10_digits);
	ft_free_text(text, 101);
	return (0);
}
