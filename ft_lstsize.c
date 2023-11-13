/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:29:53 by mohimi            #+#    #+#             */
/*   Updated: 2023/11/13 09:14:49 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*t;
	int		count;

	t = lst;
	count = 0;
	while (t != NULL)
	{
		t = t->next;
		count++;
	}
	return (count);
}
// int main()
// {
//     t_list *node1 = (t_list *)malloc(sizeof(t_list));
//     t_list *node2 = (t_list *)malloc(sizeof(t_list));
//     t_list *node3 = (t_list *)malloc(sizeof(t_list));

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;
//     int size = ft_lstsize(node1);
//     printf("List size: %d\n", size);
//     free(node1);
//     free(node2);
//     free(node3);

//     return 0;
// }