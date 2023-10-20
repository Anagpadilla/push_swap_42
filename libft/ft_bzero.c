/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:45:43 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/14 18:10:14 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It writes n zeroed bytes to the string s. If n is zero does nothing.
 **/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n-- > 0)
		*(s1++) = '\0';
}
/*
#include <stdio.h>

int main(void)
{
    char str[20] = "Mango, Pineapple!";
    printf("Before bzero(): %s\n", str);
    ft_bzero(str, 6);
    printf("After bzero(): %s\n", str);
    return 0;
}
*/
