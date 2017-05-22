/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:46:45 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:46:46 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrtrim(char const *s)
{
	size_t	len;

	len = ft_strlen(s);
	if (len == 0)
		return (ft_strnew(0));
	len--;
	while (len && s[len] && ft_isspacelinetab(s[len]))
		len--;
	return (ft_strsub(s, 0, (len + 1)));
}
