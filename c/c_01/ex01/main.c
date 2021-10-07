#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	temp;
	int	size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb = 147483648;
	}
	temp = nb;
	while ((temp /= 10) > 0)
		size *= 10;
	temp = nb;
	while (size)
	{
		ft_putchar((char)((temp / size)) + 48);
		temp %= size;
		size /= 10;
	}
}

int	main(void)
{
	int	*********a;
	int	********b;
	int	*******c;
	int	******d;
	int	*****e;
	int	****f;
	int	***g;
	int	**h;
	int	*Pointeur;
	int	numero;

	a = &b;
	b = &c;
	c = &d;
	d = &e;
	e = &f;
	f = &g;
	g = &h;
	h = &Pointeur;
	Pointeur = &numero;
	numero = 42;
	ft_ultimate_ft(a);
	ft_putnbr(numero);
	return (0);
}
