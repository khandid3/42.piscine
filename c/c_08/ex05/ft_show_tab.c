#include <unistd.h>
#include "ft_stock_str.h"

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av); // pour le main

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write (1, "\n", 1);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		ft_putstr(par[i].copy);
		write (1, "\n", 1);
		i++;
	}
}

void	ft_putchar(char c)
{	
	write (1, &c, 1);
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

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10 );
	}
	else
		ft_putchar(nb + 48);
}
/*
int	main(int ac, char **av)
{
	t_stock_str	*tab = ft_strs_to_tab(ac, av);
	ft_show_tab(tab);
}
*/
