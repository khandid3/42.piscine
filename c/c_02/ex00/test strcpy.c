/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:35:27 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/14 15:59:17 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>


int	main(void)
{
	char	dest[12] = "vkbjvbe";
	char	src[42] = "hello world hello world hello world";
	char	*resultat;

	resultat = strcpy(dest, src);
	printf("%s", resultat);
}
