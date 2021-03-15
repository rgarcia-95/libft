/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RAUL <RAUL@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 19:38:20 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/03/15 12:35:52 by RAUL             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*aux;
	char	*auxi;

	i = 0;
	aux = (char *)dst;
	auxi = (char *)src;
	if (dst != 0 || src != 0)
	{
		while (i < n)
		{
			aux[i] = auxi[i];
			i++;
		}
		return (dst);
	}
	return (0);
}
