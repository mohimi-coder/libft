/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:46:04 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/13 12:03:59 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main()
// {
//     t_list *node1 = (t_list *)malloc(sizeof(t_list));
//     t_list *node2 = (t_list *)malloc(sizeof(t_list));
//     node1->next = node2;
//     node2->next = NULL;
//     node1->content = "Node 1";
//     node2->content = "Node 2";
//     t_list *lastNode = ft_lstlast(node1);
//     printf("Content of the last node: %s\n", (char *)lastNode->content);
//     free(node1);
//     free(node2);

//     return 0;
// }
