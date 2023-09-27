/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   002.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:53:45 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 17:53:46 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_next_fib(int *fib_m1, int *fib)
{
	int	tmp;

	tmp = *fib_m1 + *fib;
	*fib_m1 = *fib;
	*fib = tmp;
}

int	ft_is_even(int *nb)
{
	if (*nb % 2 == 0)
		return (1);
	return (0);
}

int	main(void)
{
	int	fib_m1;
	int	fib;
	int	s;

	fib_m1 = 1;
	fib = 2;
	s = 0;
	while (fib <= 4000000)
	{
		if (ft_is_even(&fib))
			s += fib;
		ft_next_fib(&fib_m1, &fib);
	}
	printf("%d\n", s);
}
