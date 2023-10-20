/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:57:30 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 19:36:02 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It tests for any printing character, including space (` ').
 * RETURNS: zero if the character tests false and returns non-zero if the
 *  character tests true.
 *  */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
    int c = 'A';
    if (ft_isprint(c))
        printf("%c is a printable character.\n", c);
    else
        printf("%c is not a printable character.\n", c);
}
*/
