/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgovende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:52:58 by vgovende          #+#    #+#             */
/*   Updated: 2016/11/13 16:53:11 by vgovende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int nbr;

	i = 0;
	neg = 0;
	nbr = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == ' ' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10;
		nbr += (int)str[i] - 48;
		i++;
	}
	if (neg == 1)
		return (-nbr);
	else
		return (nbr);
}
