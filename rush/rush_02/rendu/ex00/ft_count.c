/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 17:35:40 by ahuber            #+#    #+#             */
/*   Updated: 2021/07/25 17:44:07 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count(int nbr, int count)
{
	int tempnbr;

	tempnbr = nbr;
	while (tempnbr > 0)
	{
		tempnbr = tempnbr / 1000;
		count++;
	}
	count--;
	return (count);
}
