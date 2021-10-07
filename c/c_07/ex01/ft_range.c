/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:20:01 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/25 21:30:01 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}
/*
int	main()
{
	int	min = 15;
	int	max = 15;
	int i = 0;

	while (i < (max - min))
		printf("%i\n", ft_range(min, max)[i++]);
}
*/
