/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:15:05 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/13 09:22:15 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
// int main()
// {
//     t_list *node = ft_lstnew("Hello, World!");
//     if (node != NULL)
//     {
//         printf("Node content: %s\n", (char *)node->content);
//     }
//     else
//     {
//         printf("Error creating node.\n");
//     }

//     return 0;
// }