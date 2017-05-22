/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:38:55 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:38:57 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *s1, const void *s2, size_t n)
{
	unsigned char const	*s3;
	unsigned char const	*s4;

	s3 = (unsigned char const *)s1;
	s4 = (unsigned char const *)s2;
	while (n)
	{
		if (*s3 != *s4)
			return (*s3 - *s4);
		if (n)
		{
			s3++;
			s4++;
		}
		n--;
	}
	return (0);
}
