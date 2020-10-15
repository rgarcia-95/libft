/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:47:49 by rgarcia-          #+#    #+#             */
/*   Updated: 2020/09/10 17:49:29 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*p;
	size_t	aux;

	i = 0;
	aux = count * size;
	if (!(p = (char *)malloc(aux)))
		return (0);
	while (i < aux)
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}
