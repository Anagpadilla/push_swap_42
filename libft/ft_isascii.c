/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:49:06 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 19:30:12 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 *  The isascii() function tests for an ASCII character, which is any character
 *   between 0 and octal 0177 inclusive
  **/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int c = '9';
	if (ft_isascii(c))
		printf("%c is an ASCII character\n", c);
	else
		printf("%c is not an ASCII character\n", c);
	return (0);
}
*/
