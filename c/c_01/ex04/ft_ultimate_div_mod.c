/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:00:12 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/20 21:27:06 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	*ptr;
	int	*ptr2;

	a = 12;
	b = 5;
	ptr = &a;
	ptr2 = &b;
	ft_ultimate_div_mod(ptr, ptr2);
	printf("%d\n%d", *ptr, *ptr2);
	return (0);
}
*/
