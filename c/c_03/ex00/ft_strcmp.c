#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (-1 * s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "gt";
	char	s2[] = "gt";
	int a;
	a = ft_strcmp(s1, s2);
	printf("%d", a);
	return (0);
}
*/
