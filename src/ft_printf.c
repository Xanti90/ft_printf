/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:14:48 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/02 10:00:23 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int printchar(int c)
{
	write(1,&c,1);
	return(1);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list	args;
	int	print_length;

	i = 0;
	print_lenght = 0;
	va_start(arg, str);
	while()

}

