/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:50:15 by rgarcia-          #+#    #+#             */
/*   Updated: 2020/09/10 19:52:22 by rgarcia-         ###   ########.fr       */
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
