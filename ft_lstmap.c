/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RAUL <RAUL@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 20:10:24 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/03/15 12:37:50 by RAUL             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*aux;

	if (lst == '\0')
		return (0);
	if (!(new = ft_lstnew(f(lst->content))))
		return (0);
	if (!(aux = malloc(sizeof(t_list))))
		return (0);
	aux = new;
	while (lst != '\0')
	{
		if (lst->next != NULL)
		{
			if (!(new->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&aux, del);
				return (0);
			}
			new = new->next;
		}
		lst = lst->next;
	}
	new->next = NULL;
	return (aux);
}
