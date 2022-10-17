/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:08:46 by hel-haia          #+#    #+#             */
/*   Updated: 2022/09/13 07:49:15 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = (ac - 1);
	while (i > 0)
	{
		j = 0;
		while (av[i][j] != '\0' && ac)
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
