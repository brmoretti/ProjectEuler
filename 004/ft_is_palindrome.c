/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_palindrome.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:55:36 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 17:55:37 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_palindrome(char	*str)
{
	char	*end;

	if (!*str)
		return (-1);
	end = str;
	while (*end)
		end++;
	end--;
	while (end > str)
	{
		if (*end != *str)
			return (0);
		end--;
		str++;
	}
	return (1);
}
