/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printftest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michen <michen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:47:52 by michen            #+#    #+#             */
/*   Updated: 2024/01/03 17:58:10 by michen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		function_chars;
	va_list	arg;

	// int		countarg;
	va_start(arg, str);
	function_chars = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			function_chars += ft_id(str[++i], arg);
		else
		{
			ft_putchar_fd(str[i], 1);
			function_chars++;
		}
		i++;
	}
	va_end(arg);
	return (function_chars); // nbr de caractere print
}

int	main(void)
{
	char	t;
	int		b;
	int		c;

	t = 'w';
	b = printf("%d", t);
	printf("%d\n", b);
	c = ft_printf("%d", t);
	printf("%d", c);
}
