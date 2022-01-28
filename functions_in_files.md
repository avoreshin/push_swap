
```c
init.c
[]t_unit	*ft_init_unit(void);
[]t_stack	*ft_init_stack(void);
[]int		ft_new_size(t_unit *new);
```
```c
parse_input.c
[]t_unit	*ft_split_argv(int argc, char **argv);
[]void	ft_reverse_list(t_unit **root);
```
```c
check_error_part1.c
[+]int	ft_check_split(char **split, t_unit **tmp);
[+]int	ft_check_content(char *split);
[+]int	ft_check_sorted(t_unit *tmp);
[+]int	ft_check_duplicate(t_unit *tmp2);
[+]void	ft_error_mes(void);
```
```c
check_error_part2.c
[+]int	ft_check_sing(char *split);
[+]int	ft_check_max(char *str);
[+]int	ft_check_digit(char *split, int flag)
```
```c
ft_free_arr.c
[]void	ft_free_array(char **split);
[+]void	ft_free_stack(t_unit **new)
[]void	ft_free_stack2(t_stack *new)
```
```c
commandos_part1.c
[+] void	ft_rotate(t_unit **new, int num);
[+] void	ft_reverse(t_unit **new, int num);
[+] void	ft_swap(t_unit **new, int num);
[+] void	rr(t_unit **new, t_unit **new_2, int i);
[+] void	rrr(t_unit **new, t_unit **new_2, int i)
```
```c
commandos_part2.c
[+]void	ft_push_b(t_stack **new, int i);
[+]void	con_push_b(t_stack **new, t_unit *stack_a);
[+]void	ft_push_a(t_stack *new, int i);
[+]void	con_push_a(t_stack *new, t_unit *tmp_b);
{
```
```c
commandos_part3.c
[+]void	do_operations(t_unit *tmp_a, t_unit *tmp_b, t_stack **stack_a,
					t_stack *new)
[+]void	do_rr(t_stack *stack_a, t_unit *tmp_a, t_unit *tmp_b);
[+]void	do_rrr(t_stack *stack_a, t_unit *tmp_a, t_unit *tmp_b);
[+]void	do_ra_a_rra_b(t_stack *stack_a, t_unit *tmp_a, t_unit *tmp_b);
[+]void	do_ra_b_rra_a(t_stack *stack_a, t_unit *tmp_a, t_unit *tmp_b);
```
```c
commandos_part4.c
[]int	ft_find_max_ab(int a, int b)
```
```c
find_mark.c
[+]void	ft_put_mark(t_unit *new, int num);
[+]void	con_ft_put_mark(t_unit *curr, int count_dup, t_unit *prev, t_unit *new);
[+]void	ft_find_mark_1(t_unit *new);
[+]int	ft_count_mark(t_unit *new);
```
```c
sort_5.c
[]void	ft_sort_5(int len, t_stack *new);
[]void	ft_sort_5_num(t_stack *new);
[]void	ft_sort_4_num(t_stack *new);
```
```c
sort_3.c
[]int	ft_sort_3(int len, t_stack *new);
[]void	ft_sort_3_num(t_stack *new);
[]t_unit	*ft_find_min(t_unit *new);
[]void	ft_sort_3_num(t_stack *new);
```
```c
sort_utils.c
void	ft_sort_stack(int len, t_stack *new);
t_unit	*ft_find_pair_from_a(t_unit *new, int num);
void	ft_find_rr_rra(t_unit *new);
void	ft_move_a_to_b(t_stack *new);
void	ft_move_b_to_a(t_stack **new);
```
```c
sort_utils2.c
[] int	ft_min_steps(t_unit *stack_a, t_unit *stack_b);
[+] void	ft_find_two_pairs(t_stack **new);
[] t_unit	*ft_find_max_struct(t_unit *new);
[] t_unit	*ft_find_min_struct_2(t_stack *new);
[] t_unit	*ft_find_min_struct(t_unit *new);
```