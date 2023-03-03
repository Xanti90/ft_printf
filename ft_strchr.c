/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:00:44 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/03 12:21:52 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
		{
			return (0);
		}
		s++;
	}
	return ((char *)s);
}
/*
int main()
{
	char *s = "Hello"; //cadena de prueba
	int c = 'o'; //caracter a buscar en la cadena de prueba
	printf("%s", ft_strchr(s, c));
	return (0);
}
*/
/*La función ft_strchr busca en una cadena de caracteres (s)
*el caracter específico (c)
*y devuelve un puntero al primer caracter encontrado en la cadena.
*Si el caracter no se encuentra en la cadena, la función devuelve 0.*/