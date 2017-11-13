/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:22:56 by nschwarz          #+#    #+#             */
/*   Updated: 2017/11/13 17:32:18 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_strdup((const char *)s);
	if (str == NULL)
		return (NULL);
	while (i != 0)
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
