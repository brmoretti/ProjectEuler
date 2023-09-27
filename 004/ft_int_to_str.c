/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:55:30 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 17:55:31 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_treat_negative(int *nb, char **str)
{
	if (*nb < 0)
	{
		if (*nb == -2147483648)
		{
			**str = 8 + '0';
			*nb /= 10;
			(*str)++;
		}
		*nb *= -1;
		return (-1);
	}
	return (1);
}

void	ft_treat_zero(int nb, char **str)
{
	if (nb == 0)
	{
		**str = '0';
		(*str)++;
	}
}

void	ft_reverse_string(char *str)
{
	char	swap;
	char	*end;

	end = str;
	while (*end)
		end++;
	end--;
	while (end > str)
	{
		swap = *str;
		*str = *end;
		*end = swap;
		end--;
		str++;
	}
}

char	*ft_int_to_str(int nb, char *str)
{
	int		sign;
	char	*origin;

	origin = str;
	sign = ft_treat_negative(&nb, &str);
	ft_treat_zero(nb, &str);
	while (nb > 0)
	{
		*str = nb % 10 + '0';
		nb /= 10;
		str++;
	}
	if (sign == -1)
	{
		*str = '-';
		str++;
	}
	*str = '\0';
	ft_reverse_string(origin);
	return (origin);
}
