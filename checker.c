/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/26 23:41:46 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/include/push_swap.h"

#include "get_next_line.h"

int	get_next_line(char **line)
{
	int	rez;
	int	i;

	i = 0;
	*line = malloc(4 * 1024 * 1024);
	if (!line)
		return (-1);
	readed = read(0, *line + i, 1);
	while (rez > 0)
	{
		if ((*line)[i] == '\n')
			break ;
		i++;
		rez = read(0, *line + i, 1);
	}
	(*line)[i] = '\0';
	return (rez);
}

void	do_command(char *line, t_Stack **new)
{
	if (ft_strncmp(line, "sa", 3) == 0)
		ft_swap(&(*new)->a, 0);
	else if (ft_strncmp(line, "sb", 3) == 0)
		ft_swap(&(*new)->b, 0);
	else if (ft_strncmp(line, "pa", 3) == 0)
		ft_push_a(*new, 0);
	else if (ft_strncmp(line, "pb", 3) == 0)
		ft_push_b(new, 0);
	else if (ft_strncmp(line, "ra", 3) == 0)
		ft_rotate(&(*new)->a, 0);
	else if (ft_strncmp(line, "rb", 3) == 0)
		ft_rotate(&(*new)->b, 0);
	else if (ft_strncmp(line, "rr", 3) == 0)
		rr(&(*new)->a, &(*new)->b, 0);
	else if (ft_strncmp(line, "rra", 4) == 0)
		ft_reverse(&(*new)->a, 0);
	else if (ft_strncmp(line, "rrb", 4) == 0)
		ft_reverse(&(*new)->a, 0);
	else if (ft_strncmp(line, "rrr", 4) == 0)
		rrr(&(*new)->a, &(*new)->b, 0);
	else
		ft_error_mes();
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
	new = ft_init_stack();
	new->a = ft_split_argv(argc, argv);
	if (ft_check_duplicate(new->a))
		ft_error_mes();
	if (ft_check_sorted(new->a))
		exit(1);
	read_commands(&new);
	if (ft_check_sorted(new->a))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	ft_free_stack(&(new)->A);
}
