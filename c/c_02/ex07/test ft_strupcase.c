/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:36:12 by rdomingu          #+#    #+#             */
/*   Updated: 2021/07/15 18:37:26 by rdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_lowercase(&str[i]) == 1)
		{
			str[i] = str[i] - 32;
		}
	i++;	
	}
	return (str);
}	
	
int    ft_str_is_lowercase(char *str)
{
   int	i;	

   if (str[i] < 97 || str[i] > 122)
  	 {
            return (0);
      }
   else
			return(1);
}

int	main(void)
{
	char	*resultat;
	char	str[] = "aHDFHDFdsf4252%^&";
	resultat = ft_strupcase(str);
	printf("%s", resultat);

}
