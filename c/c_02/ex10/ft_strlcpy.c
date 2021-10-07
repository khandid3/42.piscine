/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 13:02:13 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/23 13:52:57 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
//{

//}

int	main()
{
	char	dest[] = " bonjour";
	char	src[] = " au revoir";
	unsigned int	size = 5;
	printf("%lu", strlcpy(dest, src, size));
}
