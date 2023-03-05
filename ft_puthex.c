/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:52:45 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/05 15:12:41 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long int n, char format)
{
	char	*hex;
	int		len;

	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	len = 1;
	if (n / 16 > 0)
		len += ft_puthex(n / 16, format);
	ft_putchar(hex[n % 16]);
	return (len);
}
