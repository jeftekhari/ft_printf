/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:45:44 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:45:45 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t len)
{
	char	*copy;

	if (len > ft_strlen(str))
		len = ft_strlen(str);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_strncpy(copy, str, len);
	copy[len] = '\0';
	return (copy);
}
