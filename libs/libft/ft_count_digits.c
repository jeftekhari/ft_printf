/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:35:16 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:35:18 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_digits(long n, size_t base)
{
	size_t	count;

	count = 0;
	n = FT_ABS(n);
	while (n != 0)
	{
		n /= (long)base;
		count++;
	}
	return (count);
}
