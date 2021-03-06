/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/24 10:55:14 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_move_b_to_a(t_stack **new)
{
	t_unit	*stack_a;

	while ((*new)->b)
	{
		ft_find_rr_rra((*new)->a);
		ft_find_rr_rra((*new)->b);
		ft_find_two_pairs(new);
	}
	ft_find_rr_rra((*new)->a);
	stack_a = ft_find_min_struct_2(*new);
	if (stack_a->rr < stack_a->rra)
		while (stack_a->rr--)
			ft_rotate(&(*new)->a, 1);
	else
		while (stack_a->rra--)
			ft_reverse(&(*new)->a, 1);
}

void	ft_move_a_to_b(t_stack *new)
{
	int	size_of_new;

	size_of_new = ft_new_size(new->a);
	while (size_of_new--)
	{
		if (!new->a->mark)
		{
			ft_reverse(&new->a, 1);
			ft_push_b(&new, 1);
		}
		else
			ft_reverse(&new->a, 1);
	}
}

void	ft_sort_stack(int len, t_stack *new)
{
	if (len <= 3)
		ft_sort_3(len, new);
	else if (len <= 5)
		ft_sort_5(len, new);
	else
	{
		ft_find_mark_1(new->a);
		ft_move_a_to_b(new);
		ft_move_b_to_a(&new);
	}
}

void	ft_find_rr_rra(t_unit *new)
{
	int	size;
	int	i;

	i = 1;
	size = ft_new_size(new);
	while (new)
	{
		new->rr = size - i;
		new->rra = i;
		i++;
		new = new->next;
	}
}

t_unit	*ft_find_pair_from_a(t_unit *new, int num)
{
	t_unit	*prev;
	t_unit	*tmp;

	prev = new;
	tmp = new->next;
	while (tmp)
	{
		if (prev->num > num && tmp->num < num)
			return (prev);
		prev = tmp;
		tmp = tmp->next;
	}
	if (ft_find_max_struct(new)->num < num)
		return (ft_find_min_struct(new));
	if (new->num < num)
	{
		while (new->next)
			new = new->next;
		return (new);
	}
	return (ft_find_min_struct(new));
}
