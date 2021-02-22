/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:27:45 by vmusaely          #+#    #+#             */
/*   Updated: 2020/10/31 20:50:36 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int c;
	int n;

	i = 0;
	while (i < size)
	{
		n = i + 1;
		while (n < size)
		{
			if (tab[i] > tab[n])
			{
				c = tab[n];
				tab[n] = tab[i];
				tab[i] = c;
			}
			n++;
		}
		i++;
	}
}
