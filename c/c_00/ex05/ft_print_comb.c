#include <unistd.h>

void	ft_putchar(char c, char d, char e)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}

void	ft_commas_space(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	int	numbers[3];

	numbers[0] = '0';
	while (numbers[0] < '8')
	{
		numbers[1] = '0';
		while (numbers[1] < '9')
		{
			numbers[2] = '0';
			while (numbers[2] < ':')
			{
				if ((numbers[0] < numbers[1]) && (numbers[1] < numbers[2]))
				{
					ft_putchar(numbers[0], numbers[1], numbers[2]);
					if (numbers[0] != '7')
						ft_commas_space();
				}
				numbers[2]++;
			}
			numbers[1]++;
		}
		numbers[0]++;
	}
}
