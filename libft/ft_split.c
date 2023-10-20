/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:23:28 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/07 11:27:34 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 *  the string 's' into substrings using the character 'c' as a delimiter. 
 *  RETURN: The resulting array of new strings from the separation.
 *  */

#include "libft.h"

static unsigned int	ft_len(char const *s, char c)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			len++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (len);
}

static char	*ft_next_word(char const **s, char c)
{
	char	*start;
	char	*end;
	char	*word;

	while (**s && **s == c)
		(*s)++;
	start = (char *)*s;
	while (**s && **s != c)
		(*s)++;
	end = (char *)*s;
	word = ft_substr(start, 0, end - start);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**words;
	int		i;

	if (!s)
		return (NULL);
	word_count = ft_len(s, c);
	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		words[i] = ft_next_word(&s, c);
		if (!words[i])
		{
			while (i-- > 0)
				free(words[i]);
			free(words);
			return (NULL);
		}
		i++;
	}
	words[i] = NULL;
	return (words);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**strings;
	
	strings = ft_split(" helloo mango ", ' ');
	if (!strings)
		return (1);
	i = 0;
	while (strings[i])
	{
		printf("%s\n", strings[i]);
		free(strings[i]);
		i++;
	}
	free(strings);
	return (0);
}
*/