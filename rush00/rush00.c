/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 16:56:39 by bvidigal          #+#    #+#             */
/*   Updated: 2019/10/06 18:39:14 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int col;
	int lin;

	lin = 1;
	while (lin <= x)
	{
		col = 1;
		while (col <= y)
		{
			if ((col >= 2 && col < y) && (lin == 1 || lin == x))
				ft_putchar('-');
			else if ((lin > 1 && lin < x) && (col == 1 || col == y))
				ft_putchar('|');
			else if (lin > 1 && lin < x && col > 1 && col < y)
				ft_putchar(' ');
			else
				ft_putchar('o');
			col++;
		}
		lin++;
		ft_putchar('\n');
	}
}
