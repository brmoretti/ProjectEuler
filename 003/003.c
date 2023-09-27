/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   003.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:53:49 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 17:53:50 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	long int	prime;
	long int	target;

	target = 600851475143L;
	prime = 3;
	while (target > 1)
	{
		if (target % prime == 0)
		{
			target /= prime;
			continue ;
		}
		prime += 2;
	}
	printf("%li\n", prime);
}
