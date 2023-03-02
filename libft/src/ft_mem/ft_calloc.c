/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:09:38 by sajimene          #+#    #+#             */
/*   Updated: 2023/02/02 22:24:41 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = count * size;
	ptr = malloc (total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*
int main()
{
	
}
*/
/*La función ft calloc toma dos argumentos, count y size,
*que especifican el número de elementos y el tamaño de
*cada elemento, respectivamente. La función devuelve un
*puntero a un bloque de memoria dinámica que contiene
*componentes de tamaño size, inicializados a cero.
*Se calcula el tamaño total de la memoria a asignar
*como count * size.Se asigna memoria para almacenar componentes
*de tamaño size mediante malloc. Se verifica si la asignación
*de memoria ha sido exitosa. Se inicializa el bloque de memoria
*a cero mediante la función ft_ zero.
*Se devuelve el puntero a la memoria asignada.*/