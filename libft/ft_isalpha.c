/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:13:52 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/04 11:40:34 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * The isalpha() function tests for any character for which isupper(3) or
 * islower(3) is true.
 * RETURNS: zero if the character tests false and returns non-zero if the 
 * character tests true.
 * */

#include "libft.h"

int	ft_isalpha(int str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    int c1 = 'a';
    int c2 = 'B';
    int c3 = '$';

    printf("%c is alphabetic: %d\n", c1, ft_isalpha(c1));
    printf("%c is alphabetic: %d\n", c2, ft_isalpha(c2));
    printf("%c is alphabetic: %d\n", c3, ft_isalpha(c3));

    return (0);
}
*/
