/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combination.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:20:27 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/28 16:37:57 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_try_division(unsigned long long int *combn, int *divs, int len_divs)
{
	while (--len_divs >= 0)
	{
		if (divs[len_divs] != 0 && *combn % divs[len_divs] == 0)
		{
			*combn /= divs[len_divs];
			divs[len_divs] = 0;
		}
	}
}

unsigned long long int	ft_combination(int n, int r)
{
	int						*r_array;
	unsigned long long int	combn;
	int						i;

	r_array = malloc((r - 1) * sizeof(int));
	if (r_array == NULL)
		return (0);
	i = 1;
	while (++i <= r)
		r_array[i - 2] = i;
	combn = 1;
	while (--n >= r)
	{
		combn *= n + 1;
		ft_try_division(&combn, r_array, r - 1);
	}
	free(r_array);
	return (combn);
}
