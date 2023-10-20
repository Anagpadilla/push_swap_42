/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:30:56 by anagarc4          #+#    #+#             */
/*   Updated: 2023/10/11 18:30:58 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swap(t_list **stack)
{
	t_list	*node_one;
	t_list	*node_two;
	t_list	*node_three;

	node_one = stack[0];
	node_two = stack[0]->next;
	node_three = stack[0]->next->next;
	node_one->next = node_three;
	node_two->next = node_one;
	stack[0] = node_two;
}

void	ft_sa(t_list **stack_a)
{
	ft_swap(stack_a);
	write(1, "sa\n", 3);
}

void	ft_sb(t_list **stack_b)
{
	ft_swap(stack_b);
	write(1, "sb\n", 3);
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		ft_error();
	ft_swap(stack_a);
	ft_swap(stack_b);
	write(1, "ss\n", 3);
}
