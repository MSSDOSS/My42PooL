/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:17:50 by hel-haia          #+#    #+#             */
/*   Updated: 2022/09/03 02:32:59 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	j;

	i = 0;
	while (i <= size - 1)
	{
		j = i + 1;
		while (j <= size - 1)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}
/*
int main (void)
{
    int i = 0;
    int t[] = {6,2,7,8,3,5,4,1};
    ft_sort_int_tab(t, 8);
    while (i < 8)
    {
        printf("%d", t[i]);
        i++;
    }
    return 0;
}*/
