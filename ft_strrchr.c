/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:42:39 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/24 14:57:21 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	chr;

	i = 0;
	chr = (char)c;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == chr)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == chr)
		return ((char *)&s[i]);
	return (NULL);
}
