/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:27:35 by anagarc4          #+#    #+#             */
/*   Updated: 2023/09/29 15:27:37 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	int		num_argc;

	stack_a = NULL;
	if (argc < 2)
		return (FALSE);
	stack_a = ft_calloc(sizeof(t_list *), 1);
	num_argc = ft_init_stack(argc, argv, stack_a);
	if (ft_is_sorted(stack_a))
	{
		ft_lstclear(stack_a, free);
		return (FALSE);
	}	
	stack_b = NULL;
	stack_b = ft_calloc(sizeof(t_list *), 1);
	ft_sort_arg(stack_a, stack_b, num_argc);
	ft_lstclear(stack_a, free);
	ft_lstclear(stack_b, free);
	return (TRUE);
}
