/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:39:04 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:39:06 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	char		*dst_cpy;
	char const	*src_cpy;

	if (n == 0 || dst == src)
		return (dst);
	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	while (n--)
		*dst_cpy++ = *src_cpy++;
	return (dst);
}
