/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:36:48 by nschwarz          #+#    #+#             */
/*   Updated: 2017/11/13 15:44:31 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (str[len] == (char)c)
			return (str);
		len--;
	}
	return (NULL);
}
