/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:35:41 by root              #+#    #+#             */
/*   Updated: 2022/11/18 17:58:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
   t_list *swap;

   swap = *lst //endereço guardado dentro do ponteiro que ele aponta (dereferencia)
   *lst = new; //colocando endereco de new dentro do ponteiro no qual lst aponta.
   new->next = swap;
}

void freeList(t_list *head)
{
	t_list  *tmp;
	while (head)
	{
		tmp = head;
		head = head->next;
		tmp->content = NULL;
		free(tmp);
    	}
}
int main()
{
	t_list *first;
	t_list *second;
	t_list *third;
	int a = 4;
	int b = 5;
	int c = 6;
	first = ft_lstnew((void *)&a);
	second = ft_lstnew((void *)&b);
	third = ft_lstnew((void *)&c);
	first->next = second;
	ft_lstadd_front(&first, third);
	while (third)
	{
		printf("%d", *(int *)third->content);
		third = third->next;
	}
	freeList(third);
}

