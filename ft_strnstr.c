/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:12:37 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/11 21:21:15 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*find;

	str = (char *)haystack;
	find = (char *)needle;
	i = 0;
	j = 0;
	if (find[0] == 0)
		return (str);
	while (str[i] != '\0' && i < len)
	{
		while (str[i + j] == find[j] && str[i + j] != '\0' && i + j < len)
		{
			j++;
			if (find[j] == '\0')
				return (str + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
