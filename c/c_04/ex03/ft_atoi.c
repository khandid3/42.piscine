/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:53:16 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/21 15:58:32 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	signe;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	signe = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1 * signe;
		i++;
	}
	nb = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10;
		nb = (nb + str[i] - '0');
		i++;
	}	
	return (signe * nb);
}
/*
int	main(void)
{
	char	*str;

	str = "1234";	
	printf("%d", ft_atoi(str));
}
*/
