/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 23:06:04 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/20 23:07:03 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	a;
	int	k;

	i = 0;
	n = size;
	k = 1;
	while (k)
	{
		k = 0;
		i = 0;
		while ((i + 1) < n)
		{
			if ((tab[i] - tab[i + 1]) > 0)
			{
				a = tab[i];
				tab [i] = tab[i + 1];
				tab[i + 1] = a;
				k++;
			}
			i++;
		}
	}
}
/*
int	main()
{
	int	tab[12] = {1, 4, 2, 6, 3, 8, 5, 3, 0, 6, 9, 3};
	int	i;

	i = 0;
	ft_sort_int_tab (tab, 12);
	while (i < 12)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/
