/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:44:31 by bvidigal          #+#    #+#             */
/*   Updated: 2019/10/16 15:05:19 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int		ft_str_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

int		ft_str_is_alphabet(char c)
{
	if (ft_str_is_uppercase(c) || ft_str_is_lowercase(c))
		return (1);
	return (0);
}

int		ft_str_is_alphanum(char c)
{
	if (ft_str_is_alphabet(c) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0) && (ft_str_is_lowercase(str[i])))
			str[i] = str[i] - 32;
		if ((i > 0) && (ft_str_is_alphabet(str[i])))
		{
			if (!(ft_str_is_alphanum(str[i - 1])))
			{
				if (ft_str_is_lowercase(str[i]))
					str[i] = str[i] - 32;
			}
			else if (ft_str_is_uppercase(str[i]))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
