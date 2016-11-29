/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgovende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:52:59 by vgovende          #+#    #+#             */
/*   Updated: 2016/11/13 16:53:13 by vgovende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	i = 0;
	str = NULL;
	if (s && start < strlen(s))
	{
		str = (char *)malloc(len + 1);
		while (i < len && s[i] != '\0')
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = '\0';
	}
	return (str);
}
