/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 22:53:07 by bvidigal          #+#    #+#             */
/*   Updated: 2019/10/09 22:25:58 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a[3];

	a[0] = '0';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				ft_putchar(a[0]);
				ft_putchar(a[1]);
				ft_putchar(a[2]);
				if (a[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
