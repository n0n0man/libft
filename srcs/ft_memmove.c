/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:40:06 by nschwarz          #+#    #+#             */
/*   Updated: 2017/11/14 13:48:15 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*srce;
	size_t	i;

	dest = (char *)dst;
	srce = (char *)src;
	i = 0;
	if (srce < dest)
	{
		while (len--)
			dest[len] = srce[len];
	}
	else
		ft_memcpy(dest, srce, len);
	return (dest);
}
