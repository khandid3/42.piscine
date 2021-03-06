/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_firstbloc_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 17:48:08 by ahuber            #+#    #+#             */
/*   Updated: 2021/07/25 17:50:16 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	firstbloc_count(nbr)
{
	int count;

	count = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
