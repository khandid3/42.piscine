#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			ft_putchar('+');
			a++;
		}
		if (a > x)
		{
			ft_putchar('\n');
			a = 1;
			b++;
		}
	 }
}
