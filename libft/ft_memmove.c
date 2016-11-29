/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgovende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:52:58 by vgovende          #+#    #+#             */
/*   Updated: 2016/11/13 16:53:23 by vgovende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*tmp;
	const char	*tmp2;
	char		copy[len];

	i = 0;
	tmp = (char*)dst;
	tmp2 = (const char*)src;
	while (i < len)
	{
		copy[i] = tmp2[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		tmp[i] = copy[i];
		i++;
	}
	return (dst);
}
