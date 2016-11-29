/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgovende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:52:59 by vgovende          #+#    #+#             */
/*   Updated: 2016/11/13 16:53:13 by vgovende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i] != '\0')
	{
		if (big[i] == little[j])
			j++;
		else
		{
			i -= j;
			j = 0;
		}
		if (!little[j])
			return ((char *)&big[i - j + 1]);
		i++;
	}
	return (NULL);
}
