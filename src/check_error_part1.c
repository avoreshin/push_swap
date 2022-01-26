/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_part1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/26 13:21:03 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error_mes(void)
{
	write(1, "Error", 5);
	exit(EXIT_FAILURE);
}

int	ft_check_duplicate(t_unit *tmp2)
{
	t_unit	*tmp;

	while (tmp2)
	{
		if (tmp2->next)
			tmp = tmp2->next;
		else
			break ;
		while (tmp)
		{
			if (tmp->num == tmp2->num)
				return (1);
			tmp = tmp->next;
		}
		tmp2 = tmp2->next;
	}
	return (0);
}

int	ft_check_sorted(t_unit *tmp)
{
	while (tmp)
	{
		if (tmp->next)
		{
			if (tmp->num < tmp->next->num)
				return (0);
		}
		tmp = tmp->next;
	}
	return (1);
}

int	ft_check_content(char *split)
{
	int	flag;
	int	len;

	len = ft_strlen(split);
	flag = ft_check_sing(split);
	if (len - flag > 10)
		return (1);
	else if (len - flag == 10)
	{
		if (ft_check_max(split))
			return (1);
	}
	return (0);
}

int	ft_check_split(char **split, t_unit **tmp)
{
	int	i;

	i = 0;
	while (split[i])
	{
		if (ft_check_content(split[i]))
			return (1);
		(*tmp)->num = ft_atoi(split[i]);
		if (split[i + 1] != NULL)
		{
			(*tmp)->next = ft_init_unit();
			*tmp = (*tmp)->next;
		}
		i++;
	}
	return (0);
}
