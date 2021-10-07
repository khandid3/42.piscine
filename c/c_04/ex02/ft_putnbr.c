/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:20:48 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/21 19:59:35 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// par recursivite

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar ('-');
		ft_putnbr (-1 * nb);
	}	
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar (nb + '0');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main (void)
{
	int	nb;

	nb = 6543;
	ft_putnbr (nb);
}
*/
