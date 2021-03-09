/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RAUL <RAUL@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:58:18 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/03/09 20:52:33 by RAUL             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s != 0)
	{
		if (!(str = (char *)malloc(len + 1)))
			return (0);
		if (start > ft_strlen(s))
			return (ft_strdup(""));
		while (i < len && s[start] != '\0')
		{
			str[i] = (char)s[start];
			start++;
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
