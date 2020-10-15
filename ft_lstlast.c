/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:58:19 by rgarcia-          #+#    #+#             */
/*   Updated: 2020/09/10 20:01:12 by rgarcia-         ###   ########.fr       */
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
