/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:35:27 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/21 13:40:28 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (idx < n)
	{
		if (idx <= ft_strlen(src))
		{
			dest[idx] = src[idx];
		}
		else
		{
			dest[idx] = '\0';
		}
		idx++;
	}
	return (dest);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		idx++;
	}
	return (idx);
}
/*
int	main(void)
{
	char	dest[42] = "il fait beau aujourdhui";
	char	src[42] = "42lausanne"; 
	char	*resultat;
	unsigned int n = 10;

	resultat = ft_strncpy(dest, src, n);
	write(1, &dest, 42);
}
*/
