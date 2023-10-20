/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:49:18 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/09 17:22:18 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * compares not more than n characters. 
 * return an int
 * */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	int		dif;

	x = 0;
	dif = 0;
	while ((x < n) && !dif && (s1[x] != '\0') && (s2[x] != '\0'))
	{
		dif = (unsigned char)s1[x] - (unsigned char)s2[x];
		x++;
	}
	if (x < n && !dif && (s1[x] == '\0' || s2 [x] == '\0'))
		dif = (unsigned char)s1[x] - (unsigned char)s2[x];
	return (dif);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str1[] = "apple";
    char str2[] = "apricot";
    int result = ft_strncmp(str1, str2, 3);
    if (result == 0)
        printf("%s = %s\n", str1, str2);
    else if (result < 0)
        printf("%s come before %s\n", str1, str2);
    else
        printf("%s come after %s\n", str1, str2);
    return 0;
}
*/