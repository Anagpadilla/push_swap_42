/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:31:01 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/07 11:20:16 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It is used to delete and free all nodes from the given 'lst' node and 
 * onwards, using the provided 'del' function and the free(3) function. 
 * After all the nodes are deleted and freed, the pointer to the list must be 
 * set to NULL.
 * RETURNS: Nothing.
 * */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	while (current)
	{
		next = current->next;
		if (del)
			del(current->content);
		free(current);
		current = next;
	}
	free(lst);
	*lst = NULL;
}
