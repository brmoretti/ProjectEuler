/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   007.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:07 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 17:54:08 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	n_prime;
	int	i;

	i = 1;
	n_prime = 1;
	while (n_prime != 10001)
	{
		i += 2;
		if (ft_is_prime(i))
			n_prime++;
	}
	printf("%d\n", i);
}
