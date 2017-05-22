/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:38:38 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:38:42 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	unsigned char		*dst_cpy;
	unsigned char const	*src_cpy;

	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char const *)src;
	while (n--)
	{
		if ((*dst_cpy++ = *src_cpy++) == (unsigned char)c)
			return ((void *)dst_cpy);
	}
	return (NULL);
}
