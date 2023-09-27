/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_products.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:50 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 17:54:51 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_max_prod_vertical(int **matrix, int row, int col, int *max_prod)
{
	int	prod;

	prod = matrix[row][col] * matrix[row + 1][col]
		* matrix[row + 2][col] * matrix[row + 3][col];
	if (prod > *max_prod)
		*max_prod = prod;
}

void	ft_max_prod_horizontal(int **matrix, int row, int col, int *max_prod)
{
	int	prod;

	prod = matrix[row][col] * matrix[row][col + 1]
		* matrix[row][col + 2] * matrix[row][col + 3];
	if (prod > *max_prod)
		*max_prod = prod;
}

void	ft_max_prod_diag_down(int **matrix, int row, int col, int *max_prod)
{
	int	prod;

	prod = matrix[row][col] * matrix[row + 1][col + 1]
		* matrix[row + 2][col + 2] * matrix[row + 3][col + 3];
	if (prod > *max_prod)
		*max_prod = prod;
}

void	ft_max_prod_diag_up(int **matrix, int row, int col, int *max_prod)
{
	int	prod;

	prod = matrix[row][col] * matrix[row - 1][col + 1]
		* matrix[row - 2][col + 2] * matrix[row - 3][col + 3];
	if (prod > *max_prod)
		*max_prod = prod;
}

int	ft_max_product(int **matrix)
{
	int	i;
	int	j;
	int	max_prod;

	max_prod = 0;
	i = -1;
	while (++i < 20)
	{
		j = -1;
		while (++j < 20)
		{
			if (i + 3 < 20)
				ft_max_prod_vertical(matrix, i, j, &max_prod);
			if (j + 3 < 20)
				ft_max_prod_horizontal(matrix, i, j, &max_prod);
			if (i + 3 < 20 && j + 3 < 20)
				ft_max_prod_diag_down(matrix, i, j, &max_prod);
			if (i - 3 >= 0 && j + 3 < 20)
				ft_max_prod_diag_up(matrix, i, j, &max_prod);
		}
	}
	return (max_prod);
}
