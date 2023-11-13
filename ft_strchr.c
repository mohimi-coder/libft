/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:47:19 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/05 09:52:57 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			chr;

	i = 0;
	chr = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == chr)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == chr)
		return ((char *)&s[i]);
	return (NULL);
}
// int main ()
// {
// 	char *str = "this is my @name";
// 	char mention = '@';
// 	printf("mention :%s\n", ft_strchr(str, mention));
// 	printf("%p\n", mention);
// 	printf("%p\n", str + 11);
// }