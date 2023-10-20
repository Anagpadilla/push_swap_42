/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:27:02 by anagarc4          #+#    #+#             */
/*   Updated: 2023/09/29 15:27:06 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_one_sign(char *argument)
{
	int	i;

	i = 0;
	if (argument[i] == '-' || argument[i] == '+')
	{
		++i;
		if (argument[i] == '-' || argument[i] == '+')
			ft_error();
		else if (!ft_isdigit(argument[i]))
			ft_error();
	}
}

void	ft_check_int(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (num[i] == '-' || num[i] == '+')
			++i;
		while (num[i] != 32)
		{
			if (!ft_isdigit(num[i]))
				ft_error();
			++i;
		}
		++i;
	}
}

void	ft_check_duplicate(char **args)
{
	int		i;
	long	num;
	int		j;

	if (!*args)
		ft_error();
	i = -1;
	while (args[++i])
	{
		num = ft_atoi(args[i]);
		j = 0;
		while (args[++j])
		{
			if (num == ft_atoi(args[j]) && i != j)
				ft_error();
		}
	}
}

int	ft_is_sorted(t_list **stack_a)
{
	t_list	*num;

	num = stack_a[0];
	while (num->next)
	{
		if (*(long *)(num->content) > *(long *)(num->next->content))
			return (FALSE);
		num = num->next;
	}
	return (TRUE);
}
