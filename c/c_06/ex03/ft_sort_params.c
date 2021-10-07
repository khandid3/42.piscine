#include <unistd.h>

void	ft_sort(int argc, char **argv);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);

int	main(int	argc, char **argv)
{
	int	i;
	int	n;

	(void) argc;
	(void) argv;
	ft_sort(argc, argv);
	i = 1;
	n = (argc - 1);
	while (i <= n)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
}

void	ft_sort(int argc, char **argv)
{	
	char	*a;
	int		i;
	int		n;
	int		k;

	i = 1;
	k = 1;
	n = argc - 1;
	while (k)
	{
		i = 1;
		k = 0;
		while (i + 1 <= n)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				a = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = a;
				k++;
			}
			i++;
		}	
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (-1 * s2[i]);
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
