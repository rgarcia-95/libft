/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 20:02:13 by rgarcia-          #+#    #+#             */
/*   Updated: 2020/09/10 20:03:50 by rgarcia-         ###   ########.fr       */
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
