/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jolidessin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 20:46:03 by ahuber            #+#    #+#             */
/*   Updated: 2021/07/25 21:15:13 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putdessin(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void    jolidessin()
{
int i;
char topbottom[60] = "\e[35;46m*******************************************";
char middle[60] = "**                                       **";
char text[60] = "**      \e[35;40m Le programme ne marche pas \e[35;46m     **";
char text2[60] = "**   \e[35;40m mais j'ai fait un joli menu fluo \e[35;46m  **";
char rigole[46] = "JJe rigole, c'est pas implemente !\n\n\n\n\n"; 
i = 0;
// while (topbottom[i] != '\0')
// write(1, "\e[0;35m", 10);
ft_putdessin(topbottom);
write(1, "\n", 1);
ft_putdessin(topbottom);
write(1, "\n", 1);
while (i < 3)
{
    ft_putdessin(middle);
    write(1, "\n", 1);
    i++;
}
ft_putdessin(text);
write(1, "\n", 1);
ft_putdessin(text2);
write(1, "\n", 1);

i = 0;
    while (i < 3)
{
    ft_putdessin(middle);
    write(1, "\n", 1);
    i++;
}
ft_putdessin(topbottom);
write(1, "\n", 1);
ft_putdessin(topbottom);
write(1, "\n\n", 2);
write(1, "\e[32;44mAller, donne moi un argument:\033[0m\n", 48);
ft_putdessin(rigole);
// char buffer[10];
// read(STDIN_FILENO, buffer, 10);
// write(1, &buffer, 10);
}
