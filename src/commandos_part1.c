/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commandos_part1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/24 10:55:14 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rrr(t_unit **new, t_unit **new_2, int i)
{
	ft_reverse(new, 0);
	ft_reverse(new_2, 0);
	if (i == 1)
		write(1, "rrr\n", 4);
}

void	rr(t_unit **new, t_unit **new_2, int i)
{
	ft_rotate(new, 0);
	ft_rotate(new_2, 0);
	if (i == 1)
		write(1, "rr\n", 3);
}

void	ft_swap(t_unit **new, int num)
{
	t_unit	*curr;
	t_unit	*last;
	int		tmp;
	int		mark;
	
	last = *new;
	if ((*new)->next == NULL)
		return ;
	while (last->next)
	{
		curr = last;
		last = last->next;
	}
	tmp = curr->num;
	curr->num = last->num;
	last->num = tmp;
	mark = curr->mark;
	curr->mark = last->mark;
	last->mark = mark;
	if (num == 1)
		write(1, "sa\n", 3);
	else if (num == 2)
		write(1, "sb\n", 3);
}

void	ft_reverse(t_unit **new, int num)
{
	t_unit	*first;
	t_unit	*last;
	
	first = *new;
	if (first->next)
	{
		*new = (*new)->next;
		first->next = NULL;
	}
	else
		return ;
	last = *new;
	while (last->next)
		last = last->next;
	last->next = first;
	if (num == 1)
		write(1, "rra\n", 4);
	if (num == 2)
		write(1, "rrb\n", 4);
}

void	ft_rotate(t_unit **new, int num)
{
	t_unit	*tmp;
	t_unit	*prev;

	prev = *new;
	tmp = *new;
	if (!tmp->next)
		return ;
	while (tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	tmp->next = *new;
	*new = tmp;
	if (num == 1)
		write(1, "ra\n", 3);
	if (num == 2)
		write(1, "rb\n", 3);
}

