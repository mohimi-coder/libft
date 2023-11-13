/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:00:39 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/06 10:12:24 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void				*t;
	unsigned long long	sm;

	sm = count * size;
	if (sm > ULLONG_MAX)
		return (NULL);
	t = malloc(sm);
	if (t == NULL)
		return (NULL);
	ft_bzero(t, sm);
	return (t);
}

// int	main()
// {
// 	int *y = ft_calloc(3, sizeof(int));
// 	if (!y)
// 		printf("sf\n");
// 	printf("%d\n", *(y));
// 	printf("%d\n", *(y + 1));
// 	printf("%d\n", *(y + 2));
// 	*(y + 0) = 1;
// 	*(y + 1) = 2;
// 	*(y + 2) = 3;
// 	printf("%d\n", *(y + 0));
// 	printf("%d\n", *(y + 1));
// 	printf("%d\n", *(y + 2));
// }