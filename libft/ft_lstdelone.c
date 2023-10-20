/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:37:19 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/07 16:21:43 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It takes a node 'lst' as a parameter and free the memory of its content using
 * the 'del' function given as a parameter, in addition to freeing the node. 
 * The memory of 'next' should not be freed."
 * RETURNS: Nothing.
 * */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
