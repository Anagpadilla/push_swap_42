/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:30:27 by anagarc4          #+#    #+#             */
/*   Updated: 2023/10/11 18:30:32 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rotate(t_list **stack)
{
	t_list	*tmp;

	if (stack)
	{
		tmp = stack[0]->next;
		ft_lstadd_back(stack, *stack);
		stack[0] = tmp;
	}
}

void	ft_ra(t_list **stack_a)
{
	ft_rotate(stack_a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_list **stack_b)
{
	ft_rotate(stack_b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return ;
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	write(1, "rr\n", 3);
}
