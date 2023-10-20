/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:13:25 by anagarc4          #+#    #+#             */
/*   Updated: 2023/10/16 17:13:28 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define MAXINT 2147483647
# define MININT -2147483648

int		main(int argc, char **argv);

int		ft_init_stack(int argc, char **argv, t_list **stack_a);
char	**get_args(int argc, char **argv);
void	ft_sort_arg(t_list **stack_a, t_list **stack_b, int num_argc);

void	ft_one_sign(char *argument);
void	ft_check_int(char *num);
void	ft_check_duplicate(char **args);
int		ft_is_sorted(t_list **stack_a);

void	ft_free_split_arg(char **args);
void	ft_error(void);
void	ft_free_stack(t_list **stack);

void	ft_sort_two(t_list **stack_a);
void	ft_sort_three(t_list **stack_a);
void	ft_sort_four(t_list **stack_a, t_list **stack_b);
void	ft_sort_five(t_list **stack_a, t_list **stack_b);

long	ft_max(t_list **stack_a);
long	ft_min(t_list **stack_a);

void	ft_create_index(t_list **stack_a);
void	radix(t_list **stack_a, t_list **stack_b);

void	ft_swap(t_list **stack);
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_ss(t_list **stack_a, t_list **stack_b);

void	ft_rotate(t_list **stack);
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);

void	ft_pa(t_list **stack_b, t_list **stack_a);
void	ft_pb(t_list **stack_a, t_list **stack_b);

void	ft_reverse_rotate(t_list **stack);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);

#endif
