/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:28:38 by cpham             #+#    #+#             */
/*   Updated: 2019/04/11 20:23:35 by cpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_fct.h"

int		check_file(int file, char *buf, char *cur_file)
{
	if (file == -1)
	{
		ft_putstr(cur_file);
		ft_putstr(": Is a directory\n");
		return (0);
	}
	else
	{
		buf[file] = '\0';
		ft_putstr(buf);
		close(file);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		ret;
	char	*cur_file;
	char	buf[BUF_SIZE + 1];

	i = 0;
	if (argc < 2)
		return (0);
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		cur_file = argv[i];
		if (fd != -1)
		{
			ret = read(fd, buf, BUF_SIZE);
			check_file(ret, buf, cur_file);
		}
		else if (errno == 2)
			ft_putstr("No such file or directory\n");
	}
	return (0);
}
