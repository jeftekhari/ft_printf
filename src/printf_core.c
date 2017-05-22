/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_core.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 17:06:35 by jeftekha          #+#    #+#             */
/*   Updated: 2017/05/21 17:13:58 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		printf_core(char *format, va_list ap, str)
{
	char	*something;

	while (something  = ft_strchr(format, "%"))
	{
		parse(something + 1, blah);
	}
