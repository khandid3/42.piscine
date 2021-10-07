#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "fonction.c"

/*int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != ':' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		i++;
	}
	if (i == n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (*(src + index) != '\n')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}*/

char	*itostr(char *nbr, char *str)
{
	int		i;
	int		lng;
	int		fptr;
	char	bytes;
	char	*tmp;
	char	buffer[1000]; //Attention malloc!

	i = 0;
	lng = ft_strlen(nbr);
	tmp = malloc (100); //Attention malloc!
	fptr = open(str, O_RDONLY);
	bytes = read(fptr, buffer, sizeof(buffer));
	while (buffer[i] > 0)
	{
		if (ft_strncmp(&buffer[i], nbr, lng))
		{
			i += lng;
			i += 2;
			while (buffer[i] == 32)
				i++;
			while (buffer[i] != '\n')
			{
				ft_strcpy(tmp, &buffer[i]); // peut etre a enlever si on s'en sert pas
				write(1, &buffer[i], 1);
				i++;
			}

			break ;
		}
		i++;
	}
	close(fptr);
	return (tmp);
}
