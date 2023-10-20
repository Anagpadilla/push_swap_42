/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:31:58 by anagarc4          #+#    #+#             */
/*   Updated: 2023/09/29 15:32:00 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_two(t_list **stack_a)
{
	if (!ft_is_sorted(stack_a))
		ft_sa(stack_a);
}

void	ft_sort_three(t_list **stack_a)
{
	long	num;

	num = 0;
	num = ft_max(stack_a);
	if (num == *((long *)(stack_a[0]->content)))
		ft_ra(stack_a);
	else if (num == *((long *)(stack_a[0]->next->content)))
		ft_rra(stack_a);
	if (!ft_is_sorted(stack_a))
		ft_sa(stack_a);
}

void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	long	num;

	num = 0;
	num = ft_min(stack_a);
	while (num != *((long *)(stack_a[0]->content)))
		ft_rra(stack_a);
	ft_pb(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	long	num;

	num = 0;
	num = ft_min(stack_a);
	while (num != *((long *)(stack_a[0]->content)))
		ft_rra(stack_a);
	ft_pb(stack_a, stack_b);
	num = ft_min(stack_a);
	while (num != *((long *)(stack_a[0]->content)))
		ft_rra(stack_a);
	ft_pb(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}
