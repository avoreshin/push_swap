/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:56:42 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/20 21:13:54 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

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