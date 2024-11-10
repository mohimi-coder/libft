/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:45:33 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/24 15:18:49 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sersh(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] == c)
		return (1);
	else
		return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1);
	while (start < end && sersh(set, s1[start]))
		start++;
	if (start >= end)
		return (ft_strdup(""));
	while (end > 0 && sersh(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
