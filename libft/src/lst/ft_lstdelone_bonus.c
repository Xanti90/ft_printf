/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:44:35 by sajimene          #+#    #+#             */
/*   Updated: 2023/02/06 19:44:40 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
/*
int	main()
{
	t_list *lst;
	lst = (t_list *)malloc(sizeof(t_list));
	lst->content = "hola";
	lst->next = NULL;
	ft_lstdelone(lst, free);
	printf("%s", lst->content);
	return (0);
}*/
/*La función tiene como objetivo eliminar
un elemento específico de la lista enlazada.*/