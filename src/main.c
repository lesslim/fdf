/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberon-s <rberon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 16:47:40 by rberon-s          #+#    #+#             */
/*   Updated: 2019/03/28 20:08:52 by rberon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int main(int ac, char **av)
{
	int fd;

	if (ac  == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			ft_putendl("error: invalid file");
		if (fd > -1 &&   )
	}
	else
		ft_putendl("usage ./fdf file");
	return(0);
}
