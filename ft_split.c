/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:01:06 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/13 09:01:05 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(char const *str, char c)
{
	int	i;
	int	count;
	int	b;

	i = 0;
	count = 0;
	b = 0;
	while (str[i])
	{
		if (str[i] != c && b == 0)
		{
			b = 1;
			count++;
		}
		else if (str[i] == c)
			b = 0;
		i++;
	}
	return (count);
}

void	ft_free_split(char **words)
{
	int	i;

	i = 0;
	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

char	**ft_split(char const *s, char c)
{
	int		wc;
	int		wi;
	int		i;
	int		wl;
	char	**words;

	wi = 0;
	wc = ft_countword(s, c);
	words = (char **)malloc (sizeof(char *) * (wc + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (wi < wc)
	{
		while (s[i] == c)
			i++;
		wl = 0;
		while (s[i + wl] && s[i + wl] != c)
			wl++;
		words[wi] = ft_substr(s, i, wl);
		if (!words[wi++])
			return (ft_free_split(words), NULL);
		i += wl;
	}
	return (words[wi] = NULL, words);
}
// int main(void)
// {
// 	const char *str = "gascggf shgddh aDGHDG add                  ";
// 	char **words = ft_split(str, '1');
// 	for (int i = 0; words[i] != NULL; i++) {
// 		printf("Word %d: %s\n", i + 1, words[i]);
// 	}
// 	return 0;
// }