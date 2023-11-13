/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:22:05 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/10 15:30:08 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	natija;
	int	ishara;

	i = 0;
	natija = 0;
	ishara = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ishara *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		natija = natija * 10 + str[i] - 48;
		i++;
	}
	return (natija * ishara);
}

// int main()
// {
// 	char *s = "+-123";
// 	printf("mine---->%d\n", ft_atoi(s));
// 	printf("thiers--->%d\n",atoi(s));
// 	return (0);
// }
