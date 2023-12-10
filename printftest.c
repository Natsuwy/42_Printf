/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printftest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michen <michen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:47:52 by michen            #+#    #+#             */
/*   Updated: 2023/12/10 19:44:26 by michen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	param;

	// int		countarg;
	va_start(param, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			ft_id(str[++i]);
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(param);
	return (0); // nbr de caractere print
}
int	main(void)
{
	ft_printf("hello les gens %d", 10);
}
