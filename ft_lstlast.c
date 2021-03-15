/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RAUL <RAUL@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:58:19 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/03/15 12:38:09 by RAUL             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	t_list	*aux;

	if (lst != 0)
	{
		i = 0;
		aux = lst;
		while (aux != '\0')
		{
			aux = aux->next;
			i++;
		}
		if (i == 0)
			return (lst);
		while (lst != '\0' && i > 1)
		{
			lst = lst->next;
			i--;
		}
		return (lst);
	}
	return (0);
}
