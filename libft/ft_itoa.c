/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:52:09 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/26 16:22:23 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It generates a string that represents the integer value.
 * RETURN: The string representing the number.
 * NULL if memory allocation fails.
 **/

#include "libft.h"

//To return the lenght of a number:
static int	ft_len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
//It takes an int and converts it to a null-terminated str:

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		i;

	num = n;
	i = ft_len(num);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (num == 0)
		str[0] = '0';
	else if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		num = -45453;
	char	*str;

	str = ft_itoa(num);
	if (!str)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	printf("Number: %d\n", num);
	printf("String: %s\n", str);
	free(str);
	return (0);
}
*/