/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:17:43 by nschwarz          #+#    #+#             */
/*   Updated: 2017/11/13 13:20:10 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	l;

	l = 0;
	while (src[l] != '\0' && len != 0)
	{
		dst[l] = src[l];
		l++;
	}
	return (dst);
}
