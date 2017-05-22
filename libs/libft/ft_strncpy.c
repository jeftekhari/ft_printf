/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:45:13 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:45:14 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char const *src, size_t len)
{
	char *temp;

	temp = dst;
	while (len && (*dst++ = *src++))
		len--;
	while (len-- >= 2)
		*dst++ = '\0';
	return (temp);
}
