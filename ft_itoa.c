/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:13:40 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/11 16:10:22 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	arr[12];
	long	b;
	int		i;
	int		divisor;

	b = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (b < 0) 
		b *= -1;
	divisor = 1000000000;
	arr[0] = '0';
	i = 0;
	while (++i <= 10)
	{
		arr[i] = b / divisor + '0';
		b %= divisor;
		divisor /= 10;
	}
	i = 0;
	while (arr[i] == '0')
		i++;
	if (n < 0)
		arr[--i] = '-';
	return (arr[11] = '\0', ft_strdup(&arr[i]));
}
