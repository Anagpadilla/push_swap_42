/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:12:47 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/14 18:09:52 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * The atoi() function converts the initial portion of the string pointed to
     by str to int representation.
 **/

#include "libft.h"

/* long	ft_atoi(const char *str)
{
	long	res;
	int		sign;
	int		i;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
} */
long	ft_atoi(const char *str)
{
	long	i;
	long	num;
	int		sing;

	sing = 1;
	num = 0;
	i = 0;
	while (str[i] == 32 || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		sing = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sing);
}
/*
#include <stdio.h>

int main(void)
{
    const char *str = "-12-345";
    int result = ft_atoi(str);

    printf("String: %s\n", "str");
    printf("Integer value: %d\n", result);

    return 0;
}
*/
