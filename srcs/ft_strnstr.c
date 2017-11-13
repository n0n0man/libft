/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:12:46 by nschwarz          #+#    #+#             */
/*   Updated: 2017/11/13 16:14:53 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	l;

	h = (char *)haystack;
	n = (char *)needle;
	if (*n == '\0')
		return (h);
	l = ft_strlen(n);
	while (*h != '\0' && len >= l)
	{
		if (*h == *n && ft_memcmp(h, n, l) == 0)
			return (h);
		h++;
		n--;
	}
	return (NULL);
}
