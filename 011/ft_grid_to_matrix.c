/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_to_matrix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:40 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 17:54:41 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_line_to_int_array(char *line, int *arr)
{
	int	i;

	i = -1;
	while (line[++i])
	{
		if (i % 3 == 0)
			arr[i / 3] = line[i] - '0';
		else if (i % 3 == 1)
			arr[i / 3] = arr[i / 3] * 10 + line[i] - '0';
	}
}

int	ft_grid_to_matrix(int **matrix)
{
	FILE	*file;
	char	line[61];
	int		i;

	file = fopen("grid.txt", "r");
	if (file == NULL)
		return (0);
	i = 0;
	while (fgets(line, sizeof(line), file) != NULL)
	{
		ft_line_to_int_array(line, matrix[i]);
		i++;
	}
	fclose(file);
	return (1);
}
