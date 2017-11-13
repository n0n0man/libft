/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:15:33 by nschwarz          #+#    #+#             */
/*   Updated: 2017/11/13 12:38:50 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	if (n == 0 || src == dst)
		return (dst);
	s1 = (char *)dst;
	s2 = (char *)src;
	while (n > i)
	{
		s1[i] = s2[i];
		if (s2[i] == (unsigned char)c)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
