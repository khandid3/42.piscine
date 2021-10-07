/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 16:59:56 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/25 21:57:40 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen( char *str);
int	ft_tablen(char **strs, int size);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*resultat;
	int		k;
	int		i;
	int		j;

	k = 0;
	j = -1;
	if (size == 0)
	{
		resultat = malloc(1);
		resultat[0] = '\0';
		return (resultat);
	}
	resultat = malloc(ft_tablen(strs, size) + ft_strlen(sep) * (size - 1) + 1);
	while (++j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
			resultat[k++] = strs[j][i++];
		i = 0;
		while (sep[i] != '\0' && j != (size - 1))
			resultat[k++] = sep[i++];
	}
	resultat[k] = '\0';
	return (resultat);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_tablen(char **strs, int size)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	l = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
			i++;
		l += i;
		j++;
	}
	return (l);
}
/*
int	main()
{
	int	size = 3;
	char	*strs[3];
	strs[0] = "Hi,";
	strs[1] = "iii";
	strs[2] = "World";
	char sep[] = "AHA8";
	printf("%s", ft_strjoin(size, strs, sep));
}
*/
