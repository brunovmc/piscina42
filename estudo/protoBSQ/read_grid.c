/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   faz_tabuleiro.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:44:19 by bvidigal          #+#    #+#             */
/*   Updated: 2019/10/22 20:45:57 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	read_grid(char a, char b, char c, int col, int lin)
{
	int i;
	int k;
	char arr[i][k];
	int flag;
	
	//mapa = open("mapa")

	flag = 0;
	i = 0;
	k = 0;
	while (arr[i][k] <= col)
	{
		if (arr[i][k] == b)
		{	
			if (arr[i][k] == "\n")
			{
				arr[i][k] == c;
				if (arr[i][k] == b)
				{
					while (arr[i][k] != "\n")
					{
						arr[i][k] = c + 1;
						k++;
					}
					i++;
				}
			}
			flag = k;
		}
		if (arr[i][k] == "\n" && i == lin)
			return (**arr);
		k++;
	}
	return (**arr);
}
