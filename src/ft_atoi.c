/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:42:27 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/20 16:13:07 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\v'
		|| c == '\f' || c == '\r');
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	res;
	int					rank;

	sign = 1;
	res = 0;
	rank = 0;
	while (*str && is_space(*str))
		str++;
	if (*str == '-')
		sign = -sign;
	if (*str == '+' || *str == '-' )
		str++;
	while (*str && is_digit(*str))
	{
		res = res * 10 + (*str++ - '0');
		rank++;
	}
	if (rank > 19 || res > 9223372036854775807)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return (res * sign);
}
