/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:08:57 by smissott          #+#    #+#             */
/*   Updated: 2021/07/11 22:47:12 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_a;
int	g_b;
void	ft_putchar(char c);

void	first_line(int x)
{
	if (g_a == 1 && g_b == 1)
	{
		ft_putchar('/');
		g_a++;
		if (x < g_a)
		{	
			ft_putchar('\n');
			g_a = 1;
			g_b++;
		}
	}	
	while (x > g_a && g_a > 1 && g_b == 1)
	{
		ft_putchar('*');
		g_a++;
	}
	if (g_a == x && g_b == 1)
	{
		ft_putchar('\\');
		ft_putchar('\n');
		g_b++;
		g_a = 1;
	}
}

void	middle_line(int x, int y)
{
	while (g_a == 1 && g_b < y)
	{	
		ft_putchar('*');
		g_a++;
		if (x < g_a)
		{
			ft_putchar('\n');
			g_a = 1;
			g_b++;
		}
	}
	while (y > g_b && g_a < x)
	{
		ft_putchar(' ');
		g_a++;
	}
	while (y > g_b && g_a == x)
	{
		ft_putchar('*');
		ft_putchar('\n');
		g_b++;
		g_a = 1;
	}
}

void	last_line(int x, int y)
{
	if (g_a == 1 && g_b == y)
	{
		ft_putchar('\\');
		g_a++;
		if (x < g_a)
		{
			ft_putchar('\n');
			g_a = 1;
			g_b++;
		}
	}
	while (x > g_a && g_a > 1 && g_b == y)
	{
		ft_putchar('*');
		g_a++;
	}
	while (g_a > 1 && g_b == y)
	{
		ft_putchar('/');
		ft_putchar('\n');
		g_b++;
	}
}

void	rush(int x, int y)
{
	g_a = 1;
	g_b = 1;
	if (x <= 0 || y <= 0)
	{
		ft_putchar('H');
		ft_putchar('A');
		ft_putchar(' ');
		ft_putchar('H');
		ft_putchar('A');
		ft_putchar('!');
		ft_putchar('\n');
	}
	while ((g_b < y || g_b == y) && (x > 0 && y > 0))
	{
		first_line(x);
		middle_line(x, y);
		last_line(x, y);
	}
}
