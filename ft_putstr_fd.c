/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:11:36 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/03 12:48:41 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return (1);
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int main()
{
	char *s = "Hola Caracola!";
	int fd = 1;
	ft_putstr_fd(s, fd);
	return (0);
}
*/
/*es una función que imprime una cadena de
*caracteres en un descriptor de archivo dado.
*La función primero verifica si la cadena
*es nula y, si lo es, regresa sin hacer nada.
*Luego, usa la función write para escribir un
*carácter a la vez en el descriptor de archivo
*dado hasta que se hayan escrito todos los caracteres
*de la cadena. La función "libft.h" es un encabezado
*que probablemente contiene la declaración de la función
*write y otras funciones que son utilizadas en este código.*/
