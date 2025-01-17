/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RAUL <RAUL@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 19:43:02 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/03/15 12:36:49 by RAUL             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;
	unsigned char	*auxi;

	i = 0;
	aux = (unsigned char *)dst;
	auxi = (unsigned char *)src;
	if (dst != 0 || src != 0)
	{
		while (i < n)
		{
			aux[i] = auxi[i];
			if (auxi[i] == (unsigned char)c)
				return (dst + 1);
			i++;
			dst++;
		}
	}
	return (0);
}
