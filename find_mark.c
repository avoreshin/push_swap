/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                             :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:56:42 by jlamonic          #+#    #+#             */
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

int	ft_count_mark(t_unit *new)
{
    t_Unit	*tmp;
    int		count;

    count = 1;
    tmp = new;
    new = new->next;
    if (new)
    {
        while (new->next)
        {
            if (new->num > tmp->num)
            {
                count++;
                tmp = new;
            }
            new = new->next;
        }
        if (new->num > tmp->num)
            count++;
    }
    return (count);
}

void	ft_find_mark_1(t_unit *new)
{
    int	count;
    int	max;
    int	i;
    int	num;

    i = 0;
    count = ft_new_size(new);
    while (count--)
    {
        max = ft_count_mark(new);
        if (i < max)
        {
            i = max;
            num = new->num;
        }
        ft_rotate(&new, 0);
    }
    ft_put_mark(new, num);
}

void	con_ft_put_mark(t_unit *curr, int count_dup, t_unit *prev, t_unit *new)
{
    if (curr)
    {
        while (curr->next)
        {
            if (prev->num > curr->num)
            {
                prev = curr;
                curr->mark = 1;
            }
            curr = curr->next;
        }
        if (prev->num > curr->num)
            curr->mark = 1;
    }
    while (count_dup--)
        ft_rotate(&new, 0);
}

void	ft_put_mark(t_unit *new, int num)
{
    t_Unit	*curr;
    int		count;
    int		count_dup;
    t_Unit	*prev;

    count = 0;
    curr = new;
    while (curr)
    {
        if (curr->num == num)
            break ;
        count++;
        curr = curr->next;
    }
    count_dup = count;
    while (count--)
        ft_reverse(&new, 0);
    prev = new;
    prev->mark = 1;
    curr = new->next;
    con_ft_put_mark(curr, count_dup, prev, new);
}


