/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   006.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:02 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 17:54:03 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	unsigned int	i;
	unsigned int	sum_sqrd;
	unsigned int	sqrd_sum;

	i = 1;
	sum_sqrd = 0;
	sqrd_sum = 0;
	while (i <= 100)
	{
		sum_sqrd += i * i;
		sqrd_sum += i;
		i++;
	}
	sqrd_sum *= sqrd_sum;
	printf("%d\n", sqrd_sum - sum_sqrd);
	return (0);
}
