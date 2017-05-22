/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file_read_only.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:49:15 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:49:16 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		open_file_read_only(const char *file_path)
{
	int		fd;

	if ((fd = open(file_path, O_RDONLY)) == -1)
		ft_puterr("Could not open file.");
	return (fd);
}
