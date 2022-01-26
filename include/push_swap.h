/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:55:14 by jlamonic          #+#    #+#             */
/*   Updated: 2022/01/26 13:12:58 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_unit
{
	int				num;
	int				mark;
	int				rr;
	int				rra;
	int				index;
	struct s_unit	*next;
}					t_unit;

typedef struct s_stack
{
	t_unit	*a;
	t_unit	*b;
	int		num_a;
	int		num_b;
}			t_stack;

t_unit	*ft_init_unit(void);
t_stack	*ft_init_stack(void);
t_unit	*ft_split_argv(int argc, char **argv);
int		ft_check_duplicate(t_unit *tmp2);
int		ft_check_sorted(t_unit *tmp);
int		ft_check_split(char **split, t_unit **tmp);
int		ft_check_content(char *split);
int		ft_check_digit(char *split, int flag);
int		ft_check_sing(char *split);
int		ft_check_max(char *str);
void	ft_error_mes(void);
void	ft_sort_stack(int len, t_stack *new);
int		ft_new_size(t_unit *new);
void	ft_sort_stack(int len, t_stack *new);
int		ft_sort_3(int len, t_stack *new);
void	ft_sort_5(int len, t_stack *new);
void	ft_sort_4_num(t_stack *new);
t_unit	*ft_find_min(t_unit *new);
void	ft_sort_5_num(t_stack *new);
void	ft_find_rr_rra(t_unit *new);
void	ft_find_mark_1(t_unit *new);
int		ft_count_mark(t_unit *new);
void	ft_put_mark(t_unit *new, int num);
void	ft_find_rr_rra(t_unit *new);
t_unit	*ft_find_pair_from_a(t_unit *new, int num);
void	ft_find_two_pairs(t_stack **new);
t_unit	*ft_find_min_struct(t_unit *new);
t_unit	*ft_find_min_struct_2(t_stack *new);
t_unit	*ft_find_max_struct(t_unit *new);
int		ft_min_steps(t_unit *stack_a, t_unit *stack_b);
void	do_operations(t_unit *tmp_a, t_unit *tmp_b, t_stack **stack_a,
			t_stack *new);
void	do_ra_b_rra_a(t_stack *stack_a, t_unit *tmp_a, t_unit *tmp_b);
void	do_ra_a_rra_b(t_stack *stack_a, t_unit *tmp_a, t_unit *tmp_b);
void	do_rrr(t_stack *stack_a, t_unit *tmp_a, t_unit *tmp_b);
void	do_rr(t_stack *stack_a, t_unit *tmp_a, t_unit *tmp_b);
int		ft_find_max_ab(int a, int b);
void	ft_push_b(t_stack **new, int i);
void	ft_push_a(t_stack *new, int i);
void	ft_move_b_to_a(t_stack **new);
void	ft_move_a_to_b(t_stack *new);
void	rrr(t_unit **new, t_unit **new_2, int i);
void	rr(t_unit **new, t_unit **new_2, int i);
void	ft_swap(t_unit **new, int num);
void	ft_sort_3_num(t_stack *new);
int		ft_find_max(t_unit *new);
void	ft_reverse(t_unit **new, int num);
void	ft_rotate(t_unit **new, int num);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
int		ft_isdigit(int c);
void	ft_free_stack(t_unit **new);
void	ft_free_array(char **split);
#endif
