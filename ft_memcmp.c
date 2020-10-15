/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 20:12:36 by rgarcia-          #+#    #+#             */
/*   Updated: 2020/09/09 20:14:47 by rgarcia-         ###   ########.fr       */
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
