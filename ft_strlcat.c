/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RAUL <RAUL@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 20:24:50 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/03/09 20:57:22 by RAUL             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	z;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[j] != '\0')
		j++;
	z = i + j;
	if (dst[i] == '\0')
	{
		j = 0;
		while ((i + j) < (dstsize - 1) && src[j] != '\0')
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (z);
}
