/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:08:42 by nschwarz          #+#    #+#             */
/*   Updated: 2017/11/13 19:28:57 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

size_t	length(int n)
{
	size_t i;

	i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		r;

	len = length(n);
	r = n;
	if (n < 0)
	{
		r = -n;
		len++;
	}
	str = ft_strnew(len);
	if (str = NULL)
		return (NULL);
	while (r)
	{
		str[--len] = r % 10 + '0';
		r /= 10;
	}
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
