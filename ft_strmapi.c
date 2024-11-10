/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:27:05 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/24 15:40:15 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*resl;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	resl = ft_strdup(s);
	if (resl == NULL)
		return (NULL);
	while (i < len)
	{
		resl[i] = f(i, s[i]);
		i++;
	}
	resl[i] = '\0';
	return (resl);
}
