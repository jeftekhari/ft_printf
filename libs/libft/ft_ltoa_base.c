/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:38:22 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:38:24 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ltoa_base(long n, size_t base)
{
	char	*result;
	size_t	neg;
	int		rem;
	size_t	len;

	neg = (n < 0) ? 1 : 0;
	len = ft_count_digits(n, base) + 1;
	if (!(result = ft_strnew(len)))
		return (NULL);
	if (neg && ft_strncat(result, "-", 1))
		n = -n;
	if (n == 0 && ft_strncat(result, "0", 1))
		return (result);
	while (n != 0)
	{
		rem = n % (long)base;
		n /= (long)base;
		ft_strncat(result, &HEXNUMS[rem], 1);
	}
	result[len] = 0;
	if (neg && ft_strrev(++result))
		return (--result);
	return (ft_strrev(result));
}
