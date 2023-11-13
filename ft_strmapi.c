/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:27:05 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/11 16:00:33 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*resl;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL || f == NULL)
		return (NULL);
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
// int main()
// {
//     const char *str = "HELLO";
//     char *result = ft_strmapi(str,uppercase);

//     printf("Original string---->: %s\n", str);
//     printf("Modified string---->: %s\n", result);

//     free(result);

//     return 0;
// }