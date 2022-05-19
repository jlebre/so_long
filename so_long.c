/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:32:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/05/19 16:56:06 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

void	error(char *err, char **map)
{
	ft_printf(err);
	free (map);
	exit(1);
}

int	main(int argc, char *argv)
{
	if ((ft_strchr(argv, ".ber") == 1))
	{
		check(argv);
	}
	return (0);
}

//argv - map.ber
