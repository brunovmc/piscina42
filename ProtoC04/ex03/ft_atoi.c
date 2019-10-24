/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:58:14 by bvidigal          #+#    #+#             */
/*   Updated: 2019/10/24 07:50:00 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int neg;
	int number;

	i = 0;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else
		neg = 1;
	number = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		number *= 10;
		number += (int)str[i] - '0';
		i++;
	}
	return (number * neg);
}
