/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 00:05:27 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/23 13:01:04 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}
/*
int	main()
{
	int	nb;
	int	power;

	nb = 6;
	power = 1;
	printf("%d", ft_recursive_power(nb, power));
}
*/
