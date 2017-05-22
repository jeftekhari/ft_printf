/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 16:05:38 by jeftekha          #+#    #+#             */
/*   Updated: 2017/05/21 17:07:07 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		ft_printf(const char *format, ...)
{
	char		*str;
	va_list		ap;
	int			ret;

	va_start(ap, format);
	if ((ret = printf_core((char*)format, ap, &str)) > 0)
		return (-1);
	va_end(ap);
	return (0);
}
