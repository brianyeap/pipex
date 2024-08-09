/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:14:00 by brian             #+#    #+#             */
/*   Updated: 2024/08/10 03:59:25 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_strnstr(const char *str, const char *c, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!c[i])
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while ((i + j) < n && str[i + j] == c[j])
		{
			if (!c[j + 1])
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (0);
}
