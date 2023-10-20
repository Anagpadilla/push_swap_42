/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:35:05 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 19:31:38 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It tests for a decimal digit character (0,1,2,3,4,5,6,7,8,9)
 * RETURNS: zero if the character tests false and return non-zero if the 
 * character tests true.
 * */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main()
{
    char c = '5';
    int is_digit = ft_isdigit(c);

    if (is_digit)
        printf("%c is a digit.\n", c);
    else
        printf("%c is not a digit.\n", c);

    return 0;
}
*/
