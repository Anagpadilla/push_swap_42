/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:32:33 by anagarc4          #+#    #+#             */
/*   Updated: 2023/09/29 15:32:39 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	radix(t_list **stack_a, t_list **stack_b)
{
	int	cont;
	int	size;

	ft_create_index(stack_a);
	cont = 0;
	while (!ft_is_sorted(stack_a))
	{
		size = ft_lstsize(*stack_a);
		while (size > 0)
		{
			if (((stack_a[0]->index >> cont) & 1) == 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
			--size;
		}
		while (ft_lstsize(*stack_b) != 0)
			ft_pa(stack_a, stack_b);
		++cont;
	}
}

void	ft_create_index(t_list **stack_a)
{
	int		index;
	t_list	*node;
	t_list	*iter;
	long	number;

	node = *stack_a;
	iter = *stack_a;
	index = 1;
	number = 0;
	while (node)
	{
		number = *((long *)(node->content));
		iter = *stack_a;
		while (iter)
		{
			if (number > *((long *)(iter->content)))
				++index;
			iter = iter->next;
		}
		node->index = index;
		index = 1;
		node = node->next;
	}
}

long	ft_max(t_list **stack_a)
{
	long	max;
	t_list	*head;

	head = stack_a[0];
	max = *((long *)(head->content));
	while (head)
	{
		if (*(long *)(head->content) > max)
			max = *(long *)(head->content);
		head = head->next;
	}
	return (max);
}

long	ft_min(t_list **stack_a)
{
	long	min;
	t_list	*head;

	head = stack_a[0];
	min = *((long *)(head->content));
	while (head)
	{
		if (*(long *)(head->content) < min)
			min = *(long *)(head->content);
		head = head->next;
	}
	return (min);
}
