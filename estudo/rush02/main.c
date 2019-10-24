/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 12:27:00 by bvidigal          #+#    #+#             */
/*   Updated: 2019/10/20 20:56:55 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int		ft_strlen(char **argv)
{
	int i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

int     checkargv(char *argv[])
{
   int i;

    i = 0;
    while (argv[1][i] != '\0')
        {
            if (!(argv[1][i] >= 48 && argv[1][i] <= 57))
            {
                return (0);
            }
		i++;	
        }
    return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		x = 0;
		if (to_find[0] == str[i])
		{
			while (to_find[x] == str[i + x])
			{
				if (to_find[x + 1] == '\0')
					return (&str[i]);
				x++;
			}
		}
		i++;
	}
	return (0);
}




int		main(int argc, char **argv)
{
	int fd;
	char *buff;
	int i;
	int len;

	/* read  */
	
	 if (argc != 2)
    {
        write(1, "Error", 6);
        write(1, "\n", 1);
        return (1);
    }
	
	i = 0;
	if (!checkargv(argv))
		return (1);
	else
	{	
		while (argv[1][i])
		{
			if (argv[1][i] == '1')
			{
	

			}
			i++;
		}
	}
	

	
	fd = open("numbers.dict", O_RDONLY);
	if (fd < 0)
	{
		printf("failed to open and read\n");
		return (1);
	}
	

	read(fd, buff, 7000);
	buff[len] = '\0';
	printf("%s", buff);
	close(fd);

	return (0);
}
