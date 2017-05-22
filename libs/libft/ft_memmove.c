/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:39:21 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:39:23 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char		*dst_cpy;
	unsigned char const	*src_cpy;

	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char const *)src;
	if (dst_cpy <= src_cpy)
	{
		while (len--)
			*dst_cpy++ = *src_cpy++;
	}
	else
	{
		dst_cpy += len;
		src_cpy += len;
		while (len--)
			*--dst_cpy = *--src_cpy;
	}
	return ((void *)dst);
}
