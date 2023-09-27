/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   010.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:30 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 17:54:31 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int n, int *prev_primes)
{
	int	half;
	int	i;

	half = n / 2;
	i = 0;
	while (prev_primes[i] <= half)
	{
		if (n % prev_primes[i] == 0)
			return (0);
		i++;
	}
	return (1);
}

unsigned long long int	ft_primes_array(int n, int *array)
{
	int						i;
	int						j;
	unsigned long long int	sum;

	array[0] = 3;
	sum = 5;
	j = 1;
	i = 5;
	while (i < n)
	{
		if (ft_is_prime(i, array))
		{
			sum += i;
			array[j] = i;
			j++;
		}
		i += 2;
	}
	return (sum);
}

unsigned long long int	ft_sum_primes(int n)
{
	int						*arr;
	unsigned long long int	sum;

	if (n < 2)
		return (0);
	else if (n == 2)
		return (2);
	arr = malloc((n - 2) / 2 * sizeof(int));
	if (arr == NULL)
		return (0);
	sum = ft_primes_array(n, arr);
	free (arr);
	return (sum);
}

int	main(void)
{
	printf("%llu\n", ft_sum_primes(2000000));
	return (0);
}
