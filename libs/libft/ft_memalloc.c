/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:38:30 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:38:32 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * size);
	if (!result)
		return (NULL);
	ft_bzero(result, size);
	return ((void *)result);
}
