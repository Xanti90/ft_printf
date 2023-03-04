/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:14:48 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/04 11:04:44 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_case(va_list args, const char frmt)
{
	unsigned long	ptr;

	if (frmt == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (frmt == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (frmt == 'p')
	{
		ptr = va_arg(args, unsigned long);
		if (ptr)
			return (ft_puthex(ptr, frmt));
		return (ft_putstr("(nil)"));
	}
	else if (frmt == 'd' || frmt == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (frmt == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789"));
	else if (frmt == 'x' || frmt == 'X')
		return (ft_puthex(va_arg(args, unsigned int), frmt));
	else if (frmt == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%' && ft_strchr("cspdiuxX%", s[i + 1]) != 0)
		{
			length += ft_case(args, s[i + 1]);
			i++;
		}
		else
			length += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (length);
}