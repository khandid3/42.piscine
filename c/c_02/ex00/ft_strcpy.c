/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:35:27 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/21 13:10:35 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[42] = "vkbjvbe";
	char	src[42] = "hello world hello world hello world";
	char	*resultat;

	resultat = ft_strcpy(dest, src);
	printf("%s", resultat);
}
*/
