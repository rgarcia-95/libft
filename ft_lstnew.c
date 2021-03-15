/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RAUL <RAUL@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:50:15 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/03/15 12:37:28 by RAUL             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*mylist;

	if (!(mylist = (t_list *)malloc(sizeof(t_list))))
		return (0);
	mylist->content = (void *)content;
	mylist->next = NULL;
	return (mylist);
}
