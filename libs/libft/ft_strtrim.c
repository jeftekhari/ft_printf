/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:47:37 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:47:39 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*result;

	if (!s)
		return (NULL);
	result = ft_strdup(s);
	if (!result)
		return (NULL);
	result = ft_strltrim(result);
	if (!result)
		return (NULL);
	result = ft_strrtrim(result);
	if (!result)
		return (NULL);
	return (result);
}
