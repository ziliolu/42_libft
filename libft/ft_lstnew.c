/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:42:27 by root              #+#    #+#             */
/*   Updated: 2022/11/18 17:59:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *node;
	
	node  = malloc(sizeof(*node));

	if(!node)
		return (NULL);

	node->content = content;
	node->next = NULL;
	return (node);
}

/*int main()
{
	t_list *node;
	int a = 42;

	node = ft_lstnew((void *)&a);
	while(node)
	{
		printf("%d\n", *(int *)node->content);
		node = node->next;
	}
	free(node);
}*/
