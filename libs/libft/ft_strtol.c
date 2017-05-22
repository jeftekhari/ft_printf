/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:47:29 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:47:30 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_strpos(char *str, char c)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str == c)
			return (str - start);
		str++;
	}
	return (str - start);
}

static long			ft_strtol_rec(char **str, int sign, int base)
{
	long	endptr;
	int		i;

	endptr = 0;
	while (**str && (i = ft_strpos(ALPHANUMS, ft_tolower(**str))) < base)
	{
		if (sign == -1)
			endptr = endptr * base - i;
		else
			endptr = endptr * base + i;
		(*str)++;
	}
	return (endptr);
}

long				ft_strtol(char *str, char **endptr, int base)
{
	int		sign;
	long	result;

	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}
	result = ft_strtol_rec(&str, sign, base);
	*endptr = str;
	return (result);
}
