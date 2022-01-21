/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:56:42 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/20 21:13:54 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void check(char **str)
{
	while (*str)
	{
		int i = atoi(*str);
		str++;
	}
}

int ft_split_argv(int argc, char **argv)
{
	char	**mas_str;
	int		i;

	i = 1;
	while (i < argc)
	{
		mas_str = ft_split(argv[i], ' ');
		check(mas_str);
		i++;
	}
}

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
	tmp = new->A;
	count = ft_new_size(tmp);
	ft_sort_stack(count, new);
}
