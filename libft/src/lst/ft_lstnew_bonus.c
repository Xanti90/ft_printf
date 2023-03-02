/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:47:26 by sajimene          #+#    #+#             */
/*   Updated: 2023/02/06 19:47:33 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int	main()
{
	t_list	*new;

	new = ft_lstnew("Hola 42 Madrid!");
	printf("%s", new->content);
}
*/

/*La función ft_ stew() toma como entrada un puntero a un void
*(content) y devuelve un puntero a una estructura de tipo list
*con el contenido especificado.
*La función comienza declarando una variable new de tipo list.
*new = (t_list *)malloc(sizeof(t_list));
*La siguiente línea reserva espacio en memoria para la
*nueva estructura lista utilizando la función malloc.
*El tamaño de la memoria reservada es igual a sizeof(t_list),
*que es el tamaño en bytes de la estructura t_list.
*if (!new) return (NULL);
*La siguiente línea comprueba si new es nulo.
*Si lo es, se devuelve NULL.
*new->content = content;
*La siguiente línea asigna el contenido especificado a la
*variable content de la nueva estructura list.
*new->next = NULL;
*La siguiente línea asigna NULL a la variable*/