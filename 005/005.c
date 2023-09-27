/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   005.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:53:58 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 17:53:59 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_min_no_remainder_20(void)
{
	unsigned int	div;
	unsigned int	nb;

	nb = 20;
	div = 19;
	while (div > 3)
	{
		if (nb % div == 0)
		{
			div--;
			continue ;
		}
		div = 19;
		nb += 20;
	}
	return (nb);
}

int	main(void)
{
	printf("%d\n", ft_min_no_remainder_20());
	return (0);
}
