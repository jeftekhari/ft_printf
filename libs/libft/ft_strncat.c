/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:44:55 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:44:56 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	char *temp;

	temp = s1;
	if (*s1)
		while (*++s1)
			;
	while (n && (*s1++ = *s2++))
		n--;
	if (n == 0)
		*s1 = '\0';
	return (temp);
}