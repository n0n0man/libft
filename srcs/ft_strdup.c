/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:01:15 by nschwarz          #+#    #+#             */
/*   Updated: 2017/11/13 14:52:30 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	size_t	len;
	char	*dest;

	i = 0;
	len = 0;
	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(s) * (len + 1));
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
