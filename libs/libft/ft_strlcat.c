/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:44:02 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:44:04 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	char		*dst_copy;
	const char	*src_copy;
	size_t		i;
	size_t		maxlen;

	dst_copy = dst;
	src_copy = src;
	i = size;
	maxlen = FT_MIN(size, strlen(dst));
	dst_copy += maxlen;
	i = size - maxlen;
	if (!i)
		return (maxlen + ft_strlen(src_copy));
	while (*src_copy)
	{
		if (i != 1)
		{
			*dst_copy++ = *src_copy;
			i--;
		}
		src_copy++;
	}
	*dst_copy = '\0';
	return (maxlen + (src_copy - src));
}
