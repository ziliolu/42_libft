/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:37:39 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/18 17:17:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    if(nmemb == 0 || size == 0)
        return (0);
    ptr = malloc(nmemb * size);
    if(!ptr)
        return (0);
    ft_bzero(ptr, (nmemb * size));
    return (ptr);
}

int main()
{
    calloc(4, sizeof(int));
    ft_calloc(4, sizeof(int));
}

