/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 12:12:04 by ahuber            #+#    #+#             */
/*   Updated: 2021/07/21 14:43:34 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
		return (nb * ft_recursive_power(nb, power - 1));
	return (result);
}

/*int	main()
{
	printf("-8 puissance 5 = %d\n", ft_recursive_power(-8, 5));
	printf("-7 puissance 6 = %d\n", ft_recursive_power(-7, 6));
	printf("-5 puissance 8 = %d\n", ft_recursive_power(-5, 8));
	printf("-3 puissance 9 = %d\n", ft_recursive_power(-3, 9));
	printf("-2 puissance 10 = %d\n", ft_recursive_power(-2, 10));
	printf("2 puissance 3 = %d\n", ft_recursive_power(2, 3));
	printf("2 puissance 4 = %d\n", ft_recursive_power(2, 4));
}*/
