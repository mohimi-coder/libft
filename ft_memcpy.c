/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:11:04 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/10 08:30:46 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	size_t					i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (src == NULL && dest == NULL)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// int main()
// {
// 	char dest[] = "";
// 	printf("%s/n",ft_memcpy(dest, "coucou", 0));
// 	memcpy(dest, "coucou", 0);
// }