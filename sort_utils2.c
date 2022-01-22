/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:56:42 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/22 20:05:57 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

t_unit	*ft_find_min_struct(t_unit *new)
{
    int		min;
    t_unit	*curr;
    t_unit	*tmp;

    min = new->num;
    curr = new->next;
    tmp = new;
    while (curr)
    {
        if (min > curr->num)
        {
            min = curr->num;
            tmp = curr;
        }
        curr = curr->next;
    }
    return (tmp);
}

t_unit	*find_min_struct_2(t_stack *new)
{
    int		min;
    t_unit	*curr;
    t_unit	*tmp;

    min = new->A->num;
    curr = new->A;
    tmp = new->A;
    while (curr)
    {
        if (min > curr->num)
        {
            min = curr->num;
            tmp = curr;
        }
        curr = curr->next;
    }
    return (tmp);
}

t_unit	*ft_find_max_struct(t_unit *new)
{
    t_Unit	*curr;
    t_Unit	*tmp;

    curr = new->next;
    tmp = new;
    while (curr)
    {
        if (tmp->num < curr->num)
            tmp = curr;
        curr = curr->next;
    }
    return (tmp);
}

void	ft_find_two_pairs(t_stack **new)
{
    t_unit	*stack_a;
    t_unit	*stack_b;
    t_unit	tmp_a;
    t_unit	tmp_b;
    int		steps;

    steps = 2147483647;
    stack_b = (*new)->B;
    while (stack_b)
    {
        stack_a = ft_find_pair_from_a((*new)->A, stack_b->num);
        if (steps > ft_min_steps(stack_a, stack_b))
        {
            steps = ft_min_steps(stack_a, stack_b);
            tmp_a = *stack_a;
            tmp_b = *stack_b;
        }
        stack_b = stack_b->next;
    }
    tmp_b.next = NULL;
    tmp_a.next = NULL;
    do_operations(&tmp_a, &tmp_b, new, *new);
}

int	ft_min_steps(t_unit *stack_a, t_unit *stack_b)
{
    int	rr;
    int	rrr;
    int	ra_a_rra_b;
    int	ra_b_rrs_a;

    rr = ft_find_max_ab(stack_a->rr, stack_b->rr);
    rrr = ft_find_max_ab(stack_a->rra, stack_b->rra);
    ra_b_rrs_a = stack_b->rr + stack_a->rra;
    ra_a_rra_b = stack_a->rr + stack_b->rra;
    if (rr <= rrr && rr <= ra_a_rra_b && rr <= ra_b_rrs_a)
        return (rr);
    if (rrr <= rr && rrr <= ra_a_rra_b && rrr <= ra_b_rrs_a)
        return (rrr);
    if (ra_a_rra_b <= rr && ra_a_rra_b <= rrr && ra_a_rra_b <= ra_b_rrs_a)
        return (ra_a_rra_b);
    if (ra_b_rrs_a <= rr && ra_b_rrs_a <= rrr && ra_b_rrs_a <= ra_a_rra_b)
        return (ra_b_rrs_a);
    return (ra_a_rra_b);
}
