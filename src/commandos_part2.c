/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commandos_part2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/26 23:18:32 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <unistd.h>

void	con_push_a(t_stack *new, t_unit *tmp_b)
{
	t_unit	*tmp_a;

	tmp_a = new->a;
	if (tmp_a)
	{
		while (tmp_a->next)
			tmp_a = tmp_a->next;
		tmp_a->next = tmp_b;
	}
	else
		new->a = tmp_b;
}

void	ft_push_a(t_stack *new, int i)
{
	t_unit	*tmp_b;
	t_unit	*prev_b;

	tmp_b = new->b;
	prev_b = new->b;
	if (tmp_b)
	{
		if (!tmp_b->next)
			new->b = NULL;
		while (tmp_b->next)
		{
			prev_b = tmp_b;
			tmp_b = tmp_b->next;
		}
		prev_b->next = NULL;
	}
	else
		return ;
	con_push_a(new, tmp_b);
	if (i == 1)
		write(1, "pa\n", 3);
}

void	con_push_b(t_stack **new, t_unit *stack_a)
{
	t_unit	*stack_b;

	stack_b = (*new)->b;
	if (!(*new)->b)
		(*new)->b = stack_a;
	else
	{
		while (stack_b->next)
			stack_b = stack_b->next;
		stack_b->next = stack_a;
	}
}

void	ft_push_b(t_stack **new, int i)
{
	t_unit	*stack_a;
	t_unit	*prev;

	(*new)->num_a++;
	stack_a = (*new)->a;
	if (!(*new)->a)
		return ;
	else
	{
		if (!stack_a->next)
			(*new)->a = NULL;
		while (stack_a->next)
		{
			prev = stack_a;
			stack_a = stack_a->next;
		}
		prev->next = NULL;
	}
	con_push_b(new, stack_a);
	if (i == 1)
		write(1, "pb\n", 3);
}
