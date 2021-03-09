/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RAUL <RAUL@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 20:02:13 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/03/09 21:11:28 by RAUL             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*aux;

	aux = ft_lstlast(*alst);
	if (alst && new)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			aux->next = new;
			new->next = NULL;
		}
	}
}
