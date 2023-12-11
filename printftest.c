/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printftest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michen <michen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:47:52 by michen            #+#    #+#             */
/*   Updated: 2023/12/11 22:38:58 by michen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	arg;

	// int		countarg;
	va_start(arg, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			ft_id(str[++i], arg);
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(arg);
	return (0); // nbr de caractere print
}

int	main(void)
{
	void	t;

	t = 12345644;
	ft_printf("hello les gens %x basjkjhasd", t);
}
