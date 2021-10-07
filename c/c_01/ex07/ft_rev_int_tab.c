/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 22:21:09 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/20 22:21:12 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	a;

	i = 0;
	n = size;
	while (i < (n / 2))
	{	
		a = tab[i];
		tab[i] = tab [(n - 1) - i];
		tab[(n - 1) - i] = a;
		i++;
	}
}
/*
int	main()
{
	int	tab[8] = {1,2,3,4,5,6,7,8};
	int	i;


	i = 0;
	ft_rev_int_tab(tab, 8);
	while (i < 8)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/
