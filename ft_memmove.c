/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RAUL <RAUL@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 19:48:06 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/03/15 12:35:14 by RAUL             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*aux;
	char	*auxi;

	i = 0;
	aux = (char *)dst;
	auxi = (char *)src;
	if (dst != 0 || src != 0)
	{
		if (dst == src)
			return (dst);
		if (src < dst)
		{
			while (++i <= len)
				aux[len - i] = auxi[len - i];
		}
		else
		{
			while (len-- > 0)
				*(aux++) = *(auxi++);
		}
		return (dst);
	}
	return (0);
}
