/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/24 10:55:14 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_reverse_list(t_unit **root)
{
	t_unit	*prev;
	t_unit	*curr;
	t_unit	*next;

	prev = NULL;
	curr = *root;
	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*root = prev;
}

t_unit	*ft_split_argv(int argc, char **argv)
{
	int		i;
	char	**split;
	t_unit	*tmp;
	t_unit	*tmp2;

	i = 1;
	split = NULL;
	tmp2 = ft_init_unit();
	tmp = tmp2;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (ft_check_split(split, &tmp))
			ft_error_mes();
		if (i < argc - 1)
		{
			tmp->next = ft_init_unit();
			tmp = tmp->next;
		}
		i++;
		ft_free_array(split);
	}
	ft_reverse_list(&tmp2);
	return (tmp2);
}
