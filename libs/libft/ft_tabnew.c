/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:47:45 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:47:47 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabnew(size_t size)
{
	char	**result;

	result = (char **)malloc(sizeof(char *) * size);
	if (!result)
		return (NULL);
	while (size--)
		result[size] = NULL;
	return (result);
}
