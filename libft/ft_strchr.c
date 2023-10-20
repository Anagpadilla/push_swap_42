/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:19:32 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 19:59:10 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It locates the first occurrence of c (converted to a char) 
 * in the string pointed to by s.
 * RETURNS:  a pointer to the located character, or NULL if the character
 *  does not appear in the string.
 * */
char	*ft_strchr(const char *s, int c)
{	
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[50] = "Hola Caracola";
	char *result;

	result = ft_strchr(str, 'o');
	if (result == NULL)
		printf("No se encontró el caracter 'o' en la cadena.\n");
	else
		printf("El caracter 'o' se encontró en la posición %ld.\n", result - str);

	result = ft_strchr(str, 'z');
	if (result == NULL)
		printf("No se encontró el caracter 'z' en la cadena.\n");
	else
		printf("El caracter 'z' se encontró en la posición %ld.\n", result - str);

	return (0);
}
*/
