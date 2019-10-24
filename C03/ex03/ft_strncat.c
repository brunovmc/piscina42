/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:20:11 by bvidigal          #+#    #+#             */
/*   Updated: 2019/10/24 08:04:46 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int k;

	k = 0;
	while (dest[i])
		k++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
