/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 17:15:57 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/26 12:06:29 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (i < max)
	{
		(*range)[j++] = i++;
	}
	return (max - min);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	int	*range = 0;
	int	min = atoi(argv[1]);
	int	max = atoi(argv[2]);
	int	i = 0;

	printf("%d\n", ft_ultimate_range (&range, min, max));
	while (i < (max - min))
		printf("[%d]\n", range[i++]);
}
*/
