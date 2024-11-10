/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:00:39 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/27 11:19:54 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*t;

	if ((int)count < 0 || (int)size < 0)
		return (NULL);
	t = malloc(count * size);
	if (t == NULL)
		return (NULL);
	ft_bzero(t, count * size);
	return (t);
}
