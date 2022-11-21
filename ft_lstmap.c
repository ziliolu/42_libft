/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:08:30 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/21 17:44:12 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *start;

    if(!lst || !f)
        return (NULL);
    start = 0;
    while(lst)
    {
        new = ft_lstnew(f(lst->content));
        if (!new)
        {
            ft_lstclear(&start, del);
            return (NULL);
        }
        ft_lstadd_back(&start, new);
        lst = lst->next;
    }
    return (start);
}

/*void ft_delete(void *c)
{
    c = NULL;
}

void *ft_mult(void *c)
{
    int x = 10;
    c = &x;
    return(c);
}

void display(t_list *list)
{
    while(list)
    {
        printf("%d ", *(int *)list->content);
        list = list->next;
    }    
}

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    t_list *head;
    t_list *new;
    
    head = ft_lstnew(&a);
    head->next = ft_lstnew(&b);
    head->next->next = ft_lstnew(&c);
    
    display(head);
    new = ft_lstmap(head, &ft_mult, &ft_delete);
    printf("\n");
    display(new);
}*/
