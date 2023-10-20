/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:52:05 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/14 18:02:20 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * Memory allocation.
 * */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buf;

	buf = (void *) malloc (size * count);
	if (!(buf))
		return (NULL);
	ft_bzero(buf, size * count);
	return (buf);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
  int *num;
  int n = 2;
  
  if(num == NULL) 
  {
    return -1;
  }
  num[0] = 10;
  num[1] = 20;
  num[2] = 30;

  printf("Numbers:\n");
  for(int i=0; i<n; i++) {
    printf("%d ", num[i]);
  }
  free(num);
  return 0;
}
*/