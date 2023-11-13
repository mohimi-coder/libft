/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:14:54 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/10 09:24:11 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}
// int main()
// {
// 	int a[] = {-42, 55};
// 	ft_bzero(a, 0);
// 	ft_memset(a, 57, 2);
// 	ft_memset(a, 5, 1);
// 	printf("%d\n", a[0]);
// 	return (0);
// }
