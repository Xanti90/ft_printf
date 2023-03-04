/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:32:49 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/03 19:43:47 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	ft_printf("Hola %s, 42 Madrid %s\n", "hola!", "hola!");
	printf("Hola %s, 42 Madrid %s", "hola!", "hola!");
	//printf("Hola %s, 42 Madrid %s", "Hola!", "Hola!");
	return(0);
}
