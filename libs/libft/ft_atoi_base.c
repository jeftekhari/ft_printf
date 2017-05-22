/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:34:50 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:34:53 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi_base(char const *str, int base)
{
	int			result;
	char		sign;
	char const	*x;

	result = 0;
	sign = '+';
	str = ft_skip_spaces(str);
	if (*str == '-' || *str == '+')
		sign = *(str++);
	while ((x = ft_memchr(ALPHANUMS, ft_tolower(*(str++)), base)) != NULL)
		result = result * base + (x - ALPHANUMS);
	return ((sign == '+') ? result : -result);
}
