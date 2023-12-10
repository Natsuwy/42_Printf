/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printftest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michen <michen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:47:52 by michen            #+#    #+#             */
/*   Updated: 2023/12/10 18:43:35 by michen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	param;
	int		countarg;

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
