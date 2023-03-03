/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:32:49 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/03 18:10:49 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	ft_printf("Hola %c, 42 Madrid %c\n", "h", "j");
	printf("Hola %c, 42 Madrid %c", "h", "j");
	//printf("Hola %s, 42 Madrid %s", "Hola!", "Hola!");
	return(0);
}
