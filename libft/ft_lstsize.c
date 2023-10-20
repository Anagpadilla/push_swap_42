/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:50:54 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/28 15:03:58 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It counts the number of nodes in a list.
 * RETURNS: the lenght of the list.
 * */

#include "libft.h"

long	ft_lstsize(t_list *lst)
{
	long	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
