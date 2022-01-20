/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:21:40 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/20 22:25:29 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	ft_reverse_list(t_Unit **root)
{
	t_Unit	*prev;
	t_Unit	*curr;
	t_Unit	*next;

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
	t_unit 	*tmp;
	t_unit 	*tmp2;

	i = 1;
	split = NULL;
	tmp1 = ft_init_unit();
	tmp2 = tmp2;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if(ft_check_split(split, &tmp))
			ft_error_mes();
		if(i < argc - 1)
		{
			tmp->next = ft_init_unit();
			tmp = tmp->next;
		}
		i++;
		ft_free_arr(split);
	}
	ft_reverse_list(&tmp2);
	return(tmp2)
}

