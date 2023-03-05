/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:14:48 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/05 16:29:57 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_char_str_cases(va_list args, const char format)
{
	char	*str;

	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
	{
		str = va_arg(args, char *);
		if (str == NULL)
			return (ft_putstr("(null)"));
		return (ft_putstr(str));
	}
	return (-1);
}

static int	ft_other_cases(va_list args, const char format)
{
	unsigned long	ptr;

	if (format == 'p')
	{
		ptr = (unsigned long)va_arg(args, void *);
		if (ptr == 0)
			return (ft_putstr("0x0"));
		ft_putstr("0x");
		return (ft_puthex(ptr, 'x') + 2);
	}
	else if (format == 'd' || format == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (format == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789"));
	else if (format == 'x' || format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_putchar('%'));
	return (-1);
}

static int	ft_allcases(va_list args, const char format)
{
	int		result;

	result = ft_char_str_cases(args, format);
	if (result != -1)
		return (result);
	return (ft_other_cases(args, format));
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
		if (s[i] == '%' && ft_strchr("cspdiuxX%", s[i + 1]) != NULL)
		{
			length += ft_allcases(args, s[i + 1]);
			i++;
		}
		else
			length += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (length);
}
