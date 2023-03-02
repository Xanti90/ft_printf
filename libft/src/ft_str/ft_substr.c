/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:38:10 by sajimene          #+#    #+#             */
/*   Updated: 2023/02/02 21:06:52 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	size;
	char	*tab;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	count = 0;
	while (count < len)
	{
		tab[count] = s[start + count];
		count++;
	}
	tab[count] = '\0';
	return (tab);
}
/*
int	main()
{
    char *s = "Hola caracola!";
    int fd = 1;
    ft_putendl_fd(s, fd);
    return (0);
}
*/
/*La función ft substr es una función que toma 
*como entrada una cadena de caracteres (char const *s),
*un entero sin signo unsigned int start y un tamaño
*size_t len. Esta función devuelve una nueva cadena
*que es una subcadena de la cadena original s.
*La subcadena comienza en la posición start y
*tiene una longitud de letra.
*La función comienza verificando si la entrada es nula.
*Si es así, devuelve un puntero nulo. Luego, se verifica
*si la longitud de la cadena original es menor que la
*posición start. Si es así, se devuelve una cadena vacía
*(ft strdup("")). A continuación, se determina el tamaño
*de la subcadena. Si el tamaño de la subcadena es menor
*que la longitud len, entonces se asigna la longitud
*de la subcadena a len.
*A continuación, se reserva memoria para la nueva cadena
*tab con el tamaño de un carácter multiplicado por len + 1.
*Si no se pudo reservar memoria, se devuelve un puntero nulo.
*Después, se copian los caracteres de la subcadena de s a
*la nueva cadena tab. Finalmente, se agrega un carácter
*nulo al final de la nueva cadena y se devuelve el puntero
*a tab. La función ft substr toma como argumentos un
*puntero a una cadena s de caracteres, un índice de inicio
*start y una longitud lenta. La función devuelve una nueva 
*cadena que contiene los caracteres desde el start-ésimo carácter de s.
*Si la cadena s es NULL, la función devuelve NULL.
*Si la longitud de la cadena s es menor que el índice de 
*inicio start, la función devuelve una cadena vacía.
*La función ft strlen se utiliza para calcular la longitud
*de la subcadena a partir del start-ésimo carácter.
*Si la longitud de la subcadena es menor que len, se 
*establece len como la longitud de la subcadena.
*Se asigna memoria para almacenar la nueva cadena mediante
*malloc y se verifica si la asignación de memoria ha sido exitosa.
*Se copian los caracteres de la subcadena a la nueva cadena
*y se agrega un carácter nulo al final.
*La función devuelve la nueva cadena.*/