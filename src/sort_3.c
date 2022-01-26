/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/26 23:29:28 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_find_max(t_unit *new)
{
	int	max;

	max = new->num;
	while (new)
	{
		if (max < new->num)
			max = new->num;
		new = new->next;
	}
	return (max);
}

t_unit	*ft_find_min(t_unit *new)
{
	t_unit	*min;

	min = new;
	while (new)
	{
		if (min->num > new->num)
			min = new;
		new = new->next;
	}
	return (min);
}

void	ft_sort_3_num(t_stack *new)
{
	int	max;

	max = ft_find_max(new->a);
	if (new->a->next->num == max)
		ft_reverse(&new->a, 1);
	else if (new->a->next->next->num == max)
		ft_rotate(&new->a, 1);
	if (new->a->next->num < new->a->next->next->num)
		ft_swap(&new->a, 1);
}

int	ft_sort_3(int len, t_stack *new)
{
	if (len == 1)
		return (1);
	else if (len == 2)
		ft_swap(&new->a, 1);
	else if (len == 3)
		ft_sort_3_num (new);
	return (0);
}
