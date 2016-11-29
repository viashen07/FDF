/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgovende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:52:59 by vgovende          #+#    #+#             */
/*   Updated: 2016/11/13 16:53:13 by vgovende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	if ((char)c == '\0')
		return ((char *)&s[len]);
	while (len--)
		if (s[len] == (char)c)
			return ((char *)&s[len]);
	return (NULL);
}
