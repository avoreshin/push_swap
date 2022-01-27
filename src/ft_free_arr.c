/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/24 10:55:14 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_free_array(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	ft_free_stack(t_unit **new)
{
	t_unit	*curr;
	t_unit	*aux;

	curr = *new;
	while (curr)
	{
		aux = curr;
		curr = curr->next;
		free (aux);
	}
	*new = NULL;
}
