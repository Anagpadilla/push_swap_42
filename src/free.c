/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:27:51 by anagarc4          #+#    #+#             */
/*   Updated: 2023/09/29 15:27:53 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_free_split_arg(char **args)
{
	int	i;

	if (!args)
		return ;
	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_free_stack(t_list **stack)
{
	t_list	*temp;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp->content);
		free(temp);
	}
	*stack = NULL;
}
