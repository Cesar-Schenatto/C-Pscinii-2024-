# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/19 18:58:09 by ceaugust          #+#    #+#              #
#    Updated: 2024/08/19 18:58:13 by ceaugust         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include<unistd.h>

int main(int ac, char **av)
{
	int		i;
	i = 0;
	if(ac == 1)
	{
		while(av[0][i])
		{
			write(1, &av[0][i],1);
			i++;
		}
		write(1, "\n", 1);
	}
}
