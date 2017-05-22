/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:46:11 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:46:12 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	if (!*big && !*little)
		return ("");
	while (*big)
	{
		if (len < strlen(little))
			break ;
		if (ft_strlen(big) < ft_strlen(little))
			break ;
		if (ft_memcmp(big, little, ft_strlen(little)) == 0)
			return ((char *)big);
		len--;
		big++;
	}
	return (NULL);
}
