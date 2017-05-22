/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:42:14 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:42:18 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	char *temp;

	temp = (char *)s;
	while (*temp)
		if (*temp++ == c)
			return (--temp);
	if (*temp == c)
		return (temp);
	return (NULL);
}
