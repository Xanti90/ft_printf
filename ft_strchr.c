/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:00:44 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/04 10:51:34 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return (&((char *)s)[i]);
		i++;
	}
	if (s[i] == (char) c)
		return (&((char *)s)[i]);
	return (0);
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