/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:35:02 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/15 18:05:08 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It sends the string ’s’ to the file
 * */

#include "libft.h"

void	ft_putstr(char *s)
{
	int	x;

	if (!s)
		return ;
	x = 0;
	while (s[x])
	{
		write(1, &s[x], 1);
		x++;
	}
	write(1, "\n", 1);
}
