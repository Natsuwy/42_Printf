/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   id.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michen <michen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:02:01 by michen            #+#    #+#             */
/*   Updated: 2024/01/02 19:09:08 by michen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_idbis(char c, va_list arg)
{
	if (c == 'd' || c == 'i')
	{
		ft_putnbr_fd(va_arg(arg, unsigned int *), 1);
	}
	if (c == 'u')
	{
		va_arg(arg, unsigned int);
	}
	if (c == 'x')
	{
		ft_lohex(va_arg(arg, unsigned int));
	}
	if (c == 'X')
	{
		ft_uphex(va_arg(arg, unsigned int));
	}
	return (0);
}

int	ft_id(char c, va_list arg)
{
	char	car;

	if (!c)
		return (0);
	if (c == 'c')
	{
		car = va_arg(arg, int);
		ft_putchar_fd(car, 1);
	}
	if (c == 's')
		ft_putstr_fd(va_arg(arg, char *), 1);
	if (c == 'p')
	{
		va_arg(arg, void *);
	}
	if (c == '%')
	{
		write(1, &c, 1);
	}
	else
	{
		ft_idbis(c, arg);
	}
	return (0);
}
