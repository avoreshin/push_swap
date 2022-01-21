/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:56:42 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/20 21:13:54 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	ft_sort_stack(int len, t_stack *new)
{
	if (len <= 3)
		ft_sort_3(len, new);
	else if (len <= 5)
		ft_sort_5(len, new);
	else
	{
		find_mark_1(new->A);
		move_from_a_to_b(new);
		move_from_b_to_a(&new);
	}
}
