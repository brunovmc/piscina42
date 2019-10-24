/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:58:41 by bvidigal          #+#    #+#             */
/*   Updated: 2019/10/11 22:09:07 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int rest;
	int vlra;
	int vlrb;

	vlrb = *b;
	vlra = *a;
	div = vlra / vlrb;
	rest = vlra % vlrb;
	*a = div;
	*b = rest;
}
