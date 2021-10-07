/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_lenght.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 12:59:49 by ahuber            #+#    #+#             */
/*   Updated: 2021/07/25 17:44:22 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_recursive_power.c"

int	ft_first_lenght(int nbr, int count)
{
	int tempnbr;

	tempnbr = nbr;
	while (tempnbr > 0)
	{
		tempnbr = tempnbr / 1000;
		count++;
	}
	count--;
	nbr = nbr / (ft_recursive_power(1000, count));
	return (nbr);
}
