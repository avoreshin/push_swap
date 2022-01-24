/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_part2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/24 10:55:14 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ft_check_sing (char *split)
{
    int i;
    int flag;

    i = 0;
    flag = 0;
    while (split[i])
    {
        if (split[i] == '+' || split[i] == '-')
        {
            flag = 1;
            if (ft_check_digit(split, flag))
                exit(EXIT_FAILURE);
        }
        else
        {
            if (ft_check_digit(split, flag))
                exit(EXIT_FAILURE);
        }
        i++;
    }
    return (flag);
}

int ft_check_max(char *str)
{
    if (str[0] == '-')
    {
        if (ft_atoi(str) > 0)
            return (EXIT_FAILURE);
    }
    else if (ft_atoi(str) < 0)
        return (EXIT_FAILURE);
    return (EXIT_SUCCESS);
}

int ft_check_digit(char *split, int flag)
{
    int i;

    i = 0;
    if (flag == 1)
    {
        i = 1;
        while (split[i])
        {
            if (!ft_isdigit(split[i]))
                return (EXIT_FAILURE);
            i++;
        }
    }
    else
    {
        while (split[i])
        {
            if (!ft_isdigit(split[i]))
                return (EXIT_FAILURE);
            i++;
        }
    }
    return (EXIT_SUCCESS);
}
