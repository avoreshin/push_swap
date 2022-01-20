/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:56:42 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/19 14:29:13 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check(char **str)
{
	while (*str)
	{
		int i = atoi(*str);
		printf("%d\n", i);
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
	ft_split_argv(argc, **argv);
	
	
}
