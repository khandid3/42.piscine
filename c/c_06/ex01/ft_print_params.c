#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 1;
	n = (argc - 1);
	while (i <= n)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
