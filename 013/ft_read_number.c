/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:11:40 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 19:27:26 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_read_number(char **text)
{
	FILE	*file;
	int		i;

	file = fopen("numbers.txt", "r");
	if (file == NULL)
		return (0);
	i = 0;
	while (fgets(text[i], 52, file) != NULL && i < 100)
		i++;
	fclose(file);
	return (1);
}
