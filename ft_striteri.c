/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:26:03 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/11 16:11:09 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// void print_char_index(unsigned int index, char *c)
// {
//     printf("Character at index %u: %c\n", index, *c);
// }

// int main(void)
// {
//     char str[] = "Hello, world!";
//     ft_striteri(str, print_char_index);

//     return 0;
// }
