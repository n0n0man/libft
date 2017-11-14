/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:33:23 by nschwarz          #+#    #+#             */
/*   Updated: 2017/11/14 12:52:45 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_strdup((const char *)s);
	if (str == NULL)
		return (NULL);
	while (str[i] != 0)
	{
		str[i] = f((unsigned int)i, str[i]);
		i++;
	}
	return (str);
}
