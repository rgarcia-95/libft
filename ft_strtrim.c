/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RAUL <RAUL@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 18:07:31 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/03/15 12:29:24 by RAUL             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;

	i = 0;
	start = 0;
	while (set[i] != '\0')
	{
		if (s1[start] != set[i])
			i++;
		else
		{
			i = 0;
			start++;
		}
	}
	return (start);
}

static size_t	ft_end(char const *s1, char const *set, size_t start)
{
	size_t	i;
	size_t	end;

	i = 0;
	end = ft_strlen(s1) - 1;
	if (end >= 0)
	{
		while (set[i] != '\0' && end >= start)
		{
			if (s1[end] != set[i])
				i++;
			else
			{
				i = 0;
				end--;
			}
		}
	}
	return (end);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	size_t	start;
	size_t	end;
	char	*str;

	i = 0;
	if (s1 != 0)
	{
		start = ft_start(s1, set);
		end = ft_end(s1, set, start) + 1;
		if (!(str = (char *)malloc(end - start + 1)))
			return (0);
		while (start < end)
		{
			str[i] = s1[start];
			start++;
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
