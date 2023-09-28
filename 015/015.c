/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   015.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:38:00 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/28 16:25:07 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned long long int	ft_combination(int n, int r);

int	main(void)
{
	printf("%llu\n", ft_combination(40, 20));
	return (0);
}
