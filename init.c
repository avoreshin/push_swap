/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:15:53 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/20 20:38:58 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

t_unit *ft_init_unit(void)
{
	t_unit	*tmp;

	tmp = (t_unit *) malloc(sizeof(t_unit));
	tmp->index = 0;
	tmp->num = 0;
	tmp->next = NULL;
	return (tmp);
}

t_stack *ft_init_stack(void)
{
	t_stack *new;

	new = (t_stack *) malloc(sizeof(t_stack));
	if(!new)
		exit(EXIT_FAILURE);
		new->A = NULL;
		new->B = NULL;
		new->num_A = 0;
		new->num_B = 0;
	return (new);
}
