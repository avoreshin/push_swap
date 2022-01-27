/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/26 23:27:00 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_unit	*ft_init_unit(void)
{
	t_unit	*tmp;

	tmp = (t_unit *) malloc(sizeof(t_unit));
	tmp->index = 0;
	tmp->num = 0;
	tmp->next = NULL;
	tmp->mark = 0;
	return (tmp);
}

t_stack	*ft_init_stack(void)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(t_stack));
	if (!new)
		exit(EXIT_FAILURE);
	new->a = NULL;
	new->b = NULL;
	new->num_a = 0;
	new->num_b = 0;
	return (new);
}

int	ft_new_size(t_unit *new)
{
	int	i;

	i = 0;
	while (new)
	{
		i++;
		new = new->next;
	}
	return (i);
}
