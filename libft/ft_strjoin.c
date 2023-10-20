/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:37:56 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/07 11:18:45 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * Reserve (with malloc(3)) and return a new string, formed by concatenating
 * 's1' and 's2'. RETURN: The new string.
 * */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*mem;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	mem = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	mem[(ft_strlen(s1) + ft_strlen(s2))] = '\0';
	if (!mem)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		mem[i] = s1[i];
	j = 0;
	while (s2[j] != '\0')
		mem[i++] = s2[j++];
	mem[i] = '\0';
	free(s1);
	return (mem);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *s1 = "Avocado";
	char *s2 = "Papaya";
	char *s3 = ft_strjoin(s1, s2);

	if (!s3)
	{
		printf("Error");
		return (1);
	}
	printf("%s\n", s3);
	free(s3);
	return (0);
}
*/
