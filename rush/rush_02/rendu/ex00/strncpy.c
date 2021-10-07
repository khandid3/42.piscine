/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 15:10:37 by ahuber            #+#    #+#             */
/*   Updated: 2021/07/25 15:10:50 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	posi;

	posi = 0;
	while (posi < n && src[posi] != '\0')
	{
		dest[posi] = src[posi];
		posi++;
	}
	while (posi < n)
	{
		dest[posi] = '\0';
		posi++;
	}
	return (dest);
}
