/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:56:42 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/22 18:11:44 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int main (int argc, char **argv)
{
	int		count;
	t_stack	*new;
	t_unit	*tmp;

	if (argc < 2)
		exit (EXIT_FAILURE);
	new = ft_init_stack();
	new->A = ft_split_argv(argc, argv);
	if (ft_check_duplicate(new->A))
		ft_error_mes();
    if (ft_check_sorted(new->A))
        exit (EXIT_FAILURE);
	tmp = new->A;
	count = ft_new_size(tmp);
	ft_sort_stack(count, new);
    ft_free_arr(&(new->A);
}
