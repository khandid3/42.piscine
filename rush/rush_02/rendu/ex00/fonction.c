/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 10:23:41 by ahuber            #+#    #+#             */
/*   Updated: 2021/07/25 13:50:48 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	ft_atoi(char *str)
{
	int	posi;
	int	signe;
	int	answer;

	posi = 0;
	signe = 1;
	answer = 0;
	while (str[posi] == ' ' || (str[posi] >= '\t' && str[posi] <= '\r'))
	{
		posi++;
	}
	while (str[posi] == '-' || str[posi] == '+')
	{
		if (str[posi] == '-')
		{
			signe *= -1;
		}
		posi++;
	}
	while (str[posi] >= '0' && str[posi] <= '9')
	{
		answer = (str[posi] - '0') + (answer * 10);
		posi++;
	}
	return (answer * signe);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
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

static void		lengths(int n, size_t *len, int *weight)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*weight = 1;
	while (n / *weight < -9)
	{
		*weight *= 10;
		*len += 1;
	}
}

char			*ft_itoa(int n)
{
	size_t		len;
	int			weight;
	size_t		cur;
	char		*str;

	lengths(n, &len, &weight);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	cur = 0;
	if (n < 0)
	{
		str[cur] = '-';
		cur++;
	}
	if (n > 0)
		n = -n;
	while (weight >= 1)
	{
		str[cur++] = -(n / weight % 10) + 48;
		weight /= 10;
	}
	str[cur] = '\0';
	return (str);
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
}

char	*spell_number(int nbr, char *str)
{
	int		i;
	int		lng;
	int		fptr;
	char	*charint;
	char	bytes;
	char	*tmp;
	char	buffer[1000]; //Attention malloc!

	i = 0;
	charint = ft_itoa(nbr);
	lng = ft_strlen(charint);
	tmp = malloc (100); //Attention malloc!
	fptr = open(str, O_RDONLY);
	bytes = read(fptr, buffer, sizeof(buffer));
	while (buffer[i] > 0)
	{
		if (ft_strncmp(&buffer[i], charint, lng))
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
