/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:09:18 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/20 22:06:33 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_unit
{
	int				num;
	int				index;
	struct s_unit	*next;
}					t_unit;

typedef struct s_stack
{
	t_unit	*A;
	t_unit	*B;
	int		num_A;
	int		num_B;
}			t_stack;


t_unit *ft_init_unit(void);
t_stack *ft_init_stack(void);

t_unit	*ft_split_argv(int argc, char **argv);

int	ft_check_duplicate (t_unit *tmp2);
int	ft_check_sorted(t_unit *tmp);
int	ft_check_split(char **split, t_unit **tmp);
void	ft_error_mes(void);

char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
void	ft_free_arr(char **str);

#endif