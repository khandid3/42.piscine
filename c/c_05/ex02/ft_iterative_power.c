/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 23:10:24 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/23 12:56:31 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	j = 1;
	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	while (j < power)
	{
		nb = nb * i;
		j++;
	}
	return (nb);
}
/*
int	main()
{
	int	nb;
	int	power;

	nb = 0;
	power = 65;
	printf("%d", ft_iterative_power(nb, power));
}
*/
