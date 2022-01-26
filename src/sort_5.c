/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/24 10:55:14 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_4_num(t_stack *new)
{
	t_unit	*content;

	ft_find_rr_rra(new->A);
	content = ft_find_min(new->A);
	if (content->rr >= content->rra)
	{
		while (content->rra > 0)
		{
			ft_reverse(&new->a, 1);
			content->rra--;
		}
	}
	else
	{
		while (content->rr > 0)
		{
			content->rr--;
			ft_rotate(&new->a, 1);
		}
	}
	ft_push_b(&new, 1);
	ft_sort_3_num(new);
	ft_push_a(new, 1);
}

void	ft_sort_5_num(t_stack *new)
{
	t_unit	*content;

	ft_find_rr_rra(new->A);
	content = ft_find_min(new->A);
	if (content->rr >= content->rra)
	{
		while (content->rra > 0)
		{
			ft_reverse(&new->A, 1);
			content->rra--;
		}
	}
	else
	{
		while (content->rr > 0)
		{
			content->rr--;
			ft_rotate(&new->A, 1);
		}
	}
	ft_push_b(&new, 1);
	ft_sort_4_num(new);
	ft_push_a(new, 1);
}

void	ft_sort_5(int len, t_stack *new)
{
	if (len == 4)
		ft_sort_4_num(new);
	else if (len == 5)
		ft_sort_5_num(new);
}
