/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:40:09 by dyunta            #+#    #+#             */
/*   Updated: 2023/02/06 18:44:50 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_subs(const char *haystack, const char *needle, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	while (len-- && *haystack)
	{
		if (*haystack == *needle)
		{
			if (check_subs(haystack, needle, len + 1))
				return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}

static int	check_subs(const char *haystack, const char *needle, size_t len)
{
	while (len-- && *needle)
	{
		if (*needle++ != *haystack++)
			return (0);
	}
	if (*needle)
		return (0);
	return (1);
}
