/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:03:09 by nschwarz          #+#    #+#             */
/*   Updated: 2017/11/13 12:14:49 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	tofind;
	unsigned char	*ptr;
	int				i;

	tofind = (unsigned char)c;
	ptr = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (ptr[i] == tofind)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
