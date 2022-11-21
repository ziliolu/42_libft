/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:52:28 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/21 15:33:57 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;
    
    if(!*lst || !del)
        return ;
        
    while (*lst)
    {
        tmp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = tmp;
    }
}

/*void ft_freeNode(void *node)
{
    node = NULL;   
}

int main()
{
    int a = 1;
    int b = 2;
    
    t_list *first;
    t_list *second;

    first = ft_lstnew(&a);
    second = ft_lstnew(&b);
       
    first->next = second;
    second->next = NULL;

    while (first)
    {    
        printf("%d\n", *(int *)first->content);
        first = first->next;
    }
    
    ft_lstclear(&first, &ft_freeNode);
    
    if(first == NULL && second == NULL)
        printf("It's null");
    else
    {   
        printf("It's not null");
    }
}*/
