/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RAUL <RAUL@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 20:12:36 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/03/15 12:36:13 by RAUL             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			cont;

	cont = 0;
	a = (void *)s1;
	b = (void *)s2;
	while (cont < n)
	{
		if (a[cont] != b[cont])
			return (a[cont] - b[cont]);
		cont++;
	}
	return (0);
}
