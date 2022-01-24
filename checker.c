/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/24 10:55:14 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/include/push_swap.h"

void	do_command(char *line, t_Stack **new)
{
	if (ft_strncmp(line, "sa", 3) == 0)
		ft_swap(&(*new)->A, 0);
	else if (ft_strncmp(line, "sb", 3) == 0)
		ft_swap(&(*new)->B, 0);
	else if (ft_strncmp(line, "pa", 3) == 0)
		push_a(*new, 0);
	else if (ft_strncmp(line, "pb", 3) == 0)
		push_b(new, 0);
	else if (ft_strncmp(line, "ra", 3) == 0)
		rotate(&(*new)->A, 0);
	else if (ft_strncmp(line, "rb", 3) == 0)
		rotate(&(*new)->B, 0);
	else if (ft_strncmp(line, "rr", 3) == 0)
		rr(&(*new)->A, &(*new)->B, 0);
	else if (ft_strncmp(line, "rra", 4) == 0)
		ft_reverse(&(*new)->A, 0);
	else if (ft_strncmp(line, "rrb", 4) == 0)
		reverse(&(*new)->A, 0);
	else if (ft_strncmp(line, "rrr", 4) == 0)
		rrr(&(*new)->A, &(*new)->B, 0);
	else
		error();
}

void	read_commands(t_Stack **new)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line))
	{
		do_command(line, new);
		free(line);
	}
	free(line);
}

int	main(int argc, char **argv)
{
	t_Stack	*new;

	if (argc < 2)
		exit (1);
	new = init_Stack();
	new->A = split_argv(argc, argv);
	if (check_dup(new->A))
		error();
	if (check_if_sorted(new->A))
		exit(1);
	read_commands(&new);
	if (check_if_sorted(new->A))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	free_stack(&(new)->A);
}
