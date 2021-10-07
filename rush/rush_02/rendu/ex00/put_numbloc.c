/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_numbloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 13:56:11 by ahuber            #+#    #+#             */
/*   Updated: 2021/07/25 18:11:54 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put_numbloc(int nombre, char *dict)
{
	if (nombre > 99)
	{
		put_three_digits(nombre, dict);
	}
	else if (nombre > 9)
	{
		put_two_digits(nombre, dict);
	}
	else if (nombre >= 0)
	{
		spell_number(nombre, dict);
	}
}
