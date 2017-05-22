/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:46:20 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:46:21 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = ft_strlen(s) - 1;
	if (str[i + 1] == c)
		return (&str[i + 1]);
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
