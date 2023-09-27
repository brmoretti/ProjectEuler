/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   011.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:34 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 17:54:35 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		**ft_malloc_matrix(int cols, int rows);
void	ft_free_matrix(int **matrix, int rows);
int		ft_grid_to_matrix(int **matrix);
int		ft_max_product(int **matrix);

void	ft_print_matrix(int **matrix, int cols, int rows)
{
	int	i;
	int	j;

	i = -1;
	while (++i < rows)
	{
		j = -1;
		while (++j < cols)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}
}

int	main(void)
{
	int	**matrix;

	matrix = ft_malloc_matrix(20, 20);
	if (matrix == NULL)
		return (1);
	if (!ft_grid_to_matrix(matrix))
		return (1);
	printf("%d\n", ft_max_product(matrix));
	ft_free_matrix(matrix, 20);
}
