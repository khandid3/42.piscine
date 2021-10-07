/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 11:43:48 by ahuber            #+#    #+#             */
/*   Updated: 2021/07/25 20:57:41 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "fonction.c"
#include "put_two_digits.c"
#include "put_three_digits.c"
#include "put_numbloc.c"
#include "strncpy.c"
#include "ft_first_lenght.c"
#include "ft_count.c"
#include "ft_firstbloc_count.c"
#include "jolidessin.c"

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int		nombre;
		int		count;
		int 	firstbloclenght;
		int		temp;

		count = 0;
		(void) argc;
		nombre = ft_atoi(argv[2]);
		firstbloclenght = ft_first_lenght(nombre, count);
		count = ft_count(nombre, count);
		put_numbloc(firstbloclenght, argv[1]);
		temp = (1 * count * 1000);
		if (nombre > 999)
		spell_number((temp), argv[1]);
		while (count > 0)
		{
			write(1, " ", 1);
			nombre %= (ft_recursive_power(1000, count));
			if (nombre / 1000 > 0)
			{
				put_numbloc((nombre / 1000), argv[1]);
				temp = (1 * count * 1000);
				spell_number(1000, argv[1]);
			}
			else
				put_numbloc(nombre, argv[1]);
			count--;
		}
	}
	else if (argc == 1)
	{
		jolidessin();
	}
}
