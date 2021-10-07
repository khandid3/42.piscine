/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:09:12 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/21 18:40:07 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
		if (nb % i == 0)
			return (0);
	else
		i++;
	return (1);
}
/*
int	main()
{
	int	nb;

	nb = 2147483647;
	printf("%d", ft_is_prime(nb));	
	nb = 0;
	printf("%d", ft_is_prime(nb));	
	nb = 1;
	printf("%d", ft_is_prime(nb));	
	nb = 2;
	printf("%d", ft_is_prime(nb));	
	nb = 9;
	printf("%d", ft_is_prime(nb));	
	nb = 13;
	printf("%d", ft_is_prime(nb));	
	nb = 10;
	printf("%d", ft_is_prime(nb));
}
*/
