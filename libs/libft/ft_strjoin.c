/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:43:53 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:43:55 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	result = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!result)
		return (NULL);
	ft_strncpy(result, s1, ft_strlen(s1));
	ft_strncat(result, s2, ft_strlen(s2));
	return (result);
}
