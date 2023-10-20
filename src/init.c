/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:28:05 by anagarc4          #+#    #+#             */
/*   Updated: 2023/09/29 15:28:24 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_init_stack(int argc, char **argv, t_list **stack_a)
{
	t_list	*new;
	char	**sort;
	int		index;
	long	*num;

	sort = get_args(argc, argv);
	index = -1;
	while (sort[++index])
	{
		ft_one_sign(sort[index]);
		if (ft_atoi(sort[index]) < MININT || ft_atoi(sort[index]) > MAXINT)
		{
			ft_free_stack(stack_a);
			ft_error();
		}
		num = malloc(sizeof(long));
		if (!num)
			return (FALSE);
		*num = ft_atoi(sort[index]);
		new = ft_lstnew(num);
		ft_lstadd_back(stack_a, new);
	}
	ft_check_duplicate(sort);
	ft_free_split_arg(sort);
	return (index);
}

char	**get_args(int argc, char **argv)
{
	char	**arg;
	char	*total;
	int		i;

	i = 1;
	total = NULL;
	arg = NULL;
	while (i <= (argc - 1))
	{
		total = ft_strjoin(total, argv[i]);
		total = ft_strjoin(total, " ");
		++i;
	}
	ft_check_int(total);
	if (*total)
		arg = ft_split(total, ' ');
	free(total);
	return (arg);
}

void	ft_sort_arg(t_list **stack_a, t_list **stack_b, int num_argc)
{
	if (num_argc == 2)
		ft_sort_two(stack_a);
	else if (num_argc == 3)
		ft_sort_three(stack_a);
	else if (num_argc == 4)
		ft_sort_four(stack_a, stack_b);
	else if (num_argc == 5)
		ft_sort_five(stack_a, stack_b);
	else
		radix(stack_a, stack_b);
}
