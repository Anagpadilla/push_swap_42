/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:40:46 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 18:55:02 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It returns the last node of the list.
 * RETURNS: last node of the list.
 * */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
		return (lst);
	}
	return (NULL);
}

t_list	*ft_lstlast_two(t_list *lst)
{
	if (lst)
	{
		while (lst->next->next)
			lst = lst->next;
		return (lst);
	}
	return (NULL);
}
