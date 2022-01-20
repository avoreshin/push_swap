/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:33:11 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/20 21:36:49 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	ft_check_duplicate (t_unit *tmp2)
{
	t_unit *tmp;

	while (tmp2)
	{
		if (tmp2->next)
			tmp = tmp2->next;
		else
			break;
		while (tmp)
		{
			if (tmp->num == tmp2->num)
				return(EXIT_FAILURE);
			tmp = tmp->next;
		}
		tmp2 = tmp2->next;
	}
	return(EXIT_SUCCESS);
}

int	ft_check_sorted(t_unit *tmp)
{
	while (tmp)
	{
		if (tmp->next)
		{
			if(tmp->num < tmp->next->num)
				return (0);
		}
		tmp = tmp->next;
	}
	return (1);
}

int	ft_check_split(char **split, t_unit **tmp)
{
	int i;

	i = 0;
	while(split[i])
	{
		if (ft_check_content(split[i]))
			return (EXIT_FAILURE);
		(*tmp)->num = ft_atoi(split[i]);
		if (split[i + 1] != NULL)
		{
			(*tmp)->next =ft_init_unit();
			*tmp = (*tmp)->next;
		}
		i++;
	}
	return (EXIT_SUCCESS)
}

ft_check_digit()
{}

ft_check_max()
{}

ft_check_content()
{}

void	ft_error_mes(void)
{
	write(1, "Error",5);
	exit(EXIT_FAILURE);
}