/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:14:48 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/03 12:57:03 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_allcases(va_list args, const char format)
{
	unsigned long	ptr;

	if(format == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (format == 's')
		return(ft_putstr_fd(va_arg(args, char *), 1));
	else if(format == 'p')
	{
		ptr = va_arg(args, unsigned long);
		if(ptr)
			return(ft_putstr_fd("0x", 1) + ft_putnbr_base(ptr, "0123456789abcdef"));
		else
			return(ft_putstr_fd("0x0", 1));
	}
	else if (format == 'd' || format == 'i')
		return (ft_putnbr_base(va_arg(args, int), 1));
	else if (format == 'u')
		return (ft_putnbr_fd(va_arg(args, unsigned int), 1));
	else if (format == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		return (ft_putchar_fd('%', 1));
	else
		return(0);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int	i;
	int	print_length;

	i = 0;
	print_length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1] != 0))
		{
			print_length += ft_allcases(args, format[i + 1]);
			i++;
		}
		else
			print_length += ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return (print_length);
}
