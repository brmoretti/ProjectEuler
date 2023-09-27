/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_text.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:27:51 by brmoretti         #+#    #+#             */
/*   Updated: 2023/09/27 18:42:49 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free_text(char **text, int rows)
{
	int	i;

	i = -1;
	while (++i < rows)
		free(text[i]);
	free(text);
}

char	**ft_malloc_text(int cols, int rows)
{
	char	**text;
	int		i;

	text = malloc(rows * sizeof(char *));
	if (text == NULL)
		return (NULL);
	i = -1;
	while (++i < rows)
	{
		text[i] = malloc(cols * sizeof(char));
		if (text[i] == NULL)
		{
			ft_free_text(text, i - 1);
			return (NULL);
		}
	}
	return (text);
}
