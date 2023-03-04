/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:49:46 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/04 10:49:58 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
			i++;
	return (write(1, s, i));
}



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
