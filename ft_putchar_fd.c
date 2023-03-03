/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:54:15 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/03 12:56:01 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
	return (0);
}
/*
int main()
{
	char c = 'a';
	int fd = 1;
	ft_putchar_fd(c, fd);
	return (0);
}
*/