/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commandos_part2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:56:42 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/20 21:13:54 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	con_push_a(t_stack *new, t_unit *tmp_b)
{
	t_unit	*tmp_a;
	
	tmp_a = new->A;
	if (tmp_a)
	{
		while (tmp_a->next)
			tmp_a = tmp_a->next;
		tmp_a->next = tmp_b;
	}
	else
		new->A = tmp_b;
}

void	ft_push_a(t_stack *new, int i)
{
	t_Unit	*tmp_b;
	t_Unit	*prev_b;
	
	tmp_b = new->B;
	prev_b = new->B;
	if (tmp_b)
	{
		if (!tmp_b->next)
			new->B = NULL;
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

void	con_push_bb(t_stack **new, t_unit *stack_a)
{
	t_unit	*stack_b;
	
	stack_b = (*new)->B;
	if (!(*new)->B)
		(*new)->B = stack_a;
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
	
	(*new)->num_B++;
	stack_a = (*new)->A;
	if (!(*new)->A)
		return ;
	else
	{
		if (!stack_a->next)
			(*new)->A = NULL;
		while (stack_a->next)
		{
			prev = stack_a;
			stack_a = stack_a->next;
		}
		prev->next = NULL;
	}
	con_push_bb(new, stack_a);
	if (i == 1)
		write(1, "pb\n", 3);
}