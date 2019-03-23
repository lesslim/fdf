/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberon-s <rberon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 16:47:40 by rberon-s          #+#    #+#             */
/*   Updated: 2019/03/23 16:11:40 by rberon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int main(int ac, char **av)
{
	int fd;

	if (ac  == 2)
	{
		fd = open(av[1], O_RDONLY);
	}
	else
		ft_putendl("usage ./fdf file");
	return(0);
}