/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:16:16 by vmusaely          #+#    #+#             */
/*   Updated: 2020/11/04 19:16:31 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(char c)
{
	int		negative;
	char	n1;
	char	n2;

	ft_putchar('\\');
	if (c < 0)
	{
		negative = (-128 - (c)) * (-1) + 128;
		n1 = negative / 16;
		n2 = negative % 16;
	}
	else
	{
		n1 = c / 16;
		n2 = c % 16;
	}
	if (n1 < 10)
		ft_putchar(n1 + '0');
	else
		ft_putchar(n1 + 87);
	if (n2 < 10)
		ft_putchar(n2 + '0');
	else
		ft_putchar(n2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_print_hexa(str[i]);
		}
		i++;
	}
}
