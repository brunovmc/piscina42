/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:04:51 by bvidigal          #+#    #+#             */
/*   Updated: 2019/10/20 11:45:30 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int m;
	unsigned int n;

	m = 0;
	while (dest[m])
		m++;
	n = 0;
	while (src[n])
	{
		dest[m + n] = src[n];
		n++;
	}
	dest[m + n] = '\0';
	return (dest);
}
