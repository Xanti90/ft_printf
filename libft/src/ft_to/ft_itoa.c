/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:35:57 by sajimene          #+#    #+#             */
/*   Updated: 2023/01/28 04:17:11 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Esta función auxiliar cuenta los dígitos del entero largo recibido por
 parámetro.*/

static int	ft_digit_count(long int i)
{
	int	count;

	count = 0;
	if (i <= 0)
		count++;
	while (i != 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	i;
	int			len;
	char		*result;

	i = n;
	len = ft_digit_count(i);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (i < 0)
	{
		result[0] = '-';
		i = -i;
	}
	while (i >= 10)
	{
		result[--len] = (i % 10) + '0';
		i /= 10;
	}
	result[--len] = i + '0';
	return (result);
}

/*
int	main(void)
{
	int	i = -2147483648;
	printf("%s", ft_itoa(i));
	return (0);
}
*/
/*La función convierte un número entero ('i') en una cadena ('str').*/