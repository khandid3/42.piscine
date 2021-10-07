#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_commas_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
/* on va proceder avec 3 boucles while, une pour chaque chiffre */
{
	int	numbers[3];

	for (numbers[0] = '0'; numbers[0] < '8'; numbers[0]++)
	{
		for (numbers[1] = 0; numbers[1] < 9; numbers[1]++)
		{
			for (numbers[2] = '0'; numbers[2] < ':'; numbers[2]++)
			{
				if ((numbers[0] < numbers[1]) && (numbers[1] < numbers[2]))
				{
					ft_putchar(numbers[0]);
/* j'ai utilise deux methodes pour comparer, du coup il ne comprend pas 
 * mais le programme compile mais n'affiche pas le resultat, 
 * il faut utiliser une seul emethode pour donner les nombres des elements du tableau  */
					ft_putchar(numbers[1] + 48);
					ft_putchar(numbers[2]);
					if (numbers[0] != '7')
					{
						ft_commas_space();
					}
				}
			}
		}
	}
}
