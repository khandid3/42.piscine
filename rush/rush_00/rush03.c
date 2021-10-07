#include <unistd.h>

void	ft_putchar(char c);

void	ft_ligne(char debut, char milieu, char fin, int longueur)
{
	int	i;

	i = 0;
	ft_putchar(debut);
	while (i < (longueur - 2))
	{
		ft_putchar(milieu);
		i++;
	}
	if (longueur > 1)
	{
		ft_putchar(fin);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (x > 0 && y > 0)
	{
		ft_ligne('A', 'B', 'C', x);
		if (y > 2)
		{
			while (j < (y - 2))
			{
				ft_ligne('B', ' ', 'B', x);
				j++;
			}
		}
		if (y > 1)
		{
			ft_ligne('A', 'B', 'C', x);
		}
	}
}
