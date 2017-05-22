/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:44:41 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:44:42 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	result = ft_strnew(ft_strlen(s));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(s[i]);
		i++;
	}
	return (result);
}
