/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:56:16 by bvidigal          #+#    #+#             */
/*   Updated: 2019/10/11 22:14:15 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int begin;
	int new_tab;

	begin = -1;
	while (begin <= size)
	{
		new_tab = tab[begin];
		tab[begin] = tab[size];
		tab[size] = new_tab;
		begin++;
		size--;
	}
}
