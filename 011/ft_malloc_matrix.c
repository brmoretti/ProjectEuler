/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:46 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 17:54:47 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_free_matrix(int **matrix, int rows)
{
	int	i;

	i = -1;
	while (++i < rows)
		free(matrix[i]);
	free(matrix);
}

int	**ft_malloc_matrix(int cols, int rows)
{
	int	**matrix;
	int	i;

	matrix = malloc(rows * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	i = -1;
	while (++i < rows)
	{
		matrix[i] = malloc(cols * sizeof(int));
		if (matrix[i] == NULL)
		{
			ft_free_matrix(matrix, i - 1);
			return (NULL);
		}
	}
	return (matrix);
}
