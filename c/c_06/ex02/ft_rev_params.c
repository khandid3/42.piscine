/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 22:31:37 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/21 22:31:38 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	n = argc - 1;
	i = n;
	while (i >= 1)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i--;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
