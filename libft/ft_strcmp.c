/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgovende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:52:58 by vgovende          #+#    #+#             */
/*   Updated: 2016/11/13 16:53:11 by vgovende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (*(unsigned char *)&s1[i] < *(unsigned char *)&s2[i])
			return (-1);
		else if (*(unsigned char *)&s1[i] > *(unsigned char *)&s2[i])
			return (1);
		i++;
	}
	return (0);
}
