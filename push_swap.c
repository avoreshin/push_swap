/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/24 10:55:14 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int argc, char **argv)
{
	int		count;
	t_stack	*new;
	t_unit	*tmp;

	if (argc < 2)
		exit (EXIT_FAILURE);
	new = ft_init_stack();
	new->a = ft_split_argv(argc, argv);
	if (ft_check_duplicate(new->a))
		ft_error_mes();
	if (ft_check_sorted(new->a))
		exit (EXIT_FAILURE);
	tmp = new->a;
	count = ft_new_size(tmp);
	ft_sort_stack(count, new);
	ft_free_stack(&(new->a));
}
