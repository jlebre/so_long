/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:03:52 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/09 19:15:54 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_map(char *map)
{
	int	fd;
	int	size;

	size = ft_strlen(map);
	fd = open(map, O_DIRECTORY);
	if (fd >= 0)
		ft_error("Argv[1] is not a directory!");
	fd = open(map, O_RDONLY);
	if (fd < 0)
		ft_error("Argv[1] did not opened!");
	if (!ft_strnstr(map, ".ber", 5))
		ft_error(".ber File Required");
	close (fd);
}
