/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:12:51 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/10 07:52:17 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*result;
	size_t	lentgh_s1;
	size_t	lentgh_s2;

	i = 0;
	j = 0;
	lentgh_s1 = ft_strlen(s1);
	lentgh_s2 = ft_strlen(s2);
	result = (char *) malloc((lentgh_s1 + lentgh_s2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
		result[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		result[j++] = s2[i++];
	result[j] = '\0';
	return (result);
}
// int main() {
//     const char *s1 = "Hello, ";
//     const char *s2 = "world!";
//     char *result = ft_strjoin(s1, s2);
// 	printf("Joined string: %s\n", result);
// 	return (0);
// }