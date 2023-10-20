/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:09:15 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 17:52:53 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It creates a new node using malloc
 * */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_lst;

	new_lst = malloc(sizeof(t_list));
	if (!new_lst)
		return (NULL);
	new_lst->content = content;
	new_lst->next = NULL;
	new_lst->index = 0;
	return (new_lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	**list;
	t_list	*node;
	t_list	*new;
	node = ft_lstnew("Mango");
	new = ft_lstnew("Avocado");
	*list = node;
	printf("%s\n", (*list)->content);
//	ft_lstadd_front(list, new);
	*list = new;
	printf("%s\n", (*list)->content);
//	printf("%s\n", (*list)->next->content);
	return (0);
}*/
