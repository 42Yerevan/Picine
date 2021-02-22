/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:37:26 by vmusaely          #+#    #+#             */
/*   Updated: 2020/10/28 16:38:23 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	println(int *r, int n)
{
	int	i;
	int di;

	di = 1;
	i = 0;
	while (++i < n)
		if (r[i - 1] >= r[i])
			di = 0;
	if (!di)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(r[i] + 48);
	if (r[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	r[10];

	if (n > 10 || n < 0)
		return ;
	i = -1;
	while (++i < n)
		r[i] = i;
	while (r[0] <= (10 - n) && n >= 1)
	{
		println(r, n);
		if (n == 10)
			break ;
		r[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (r[i] > 9)
			{
				r[i - 1]++;
				r[i] = 0;
			}
		}
	}
}
