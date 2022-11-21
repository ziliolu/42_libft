/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:19:34 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/21 20:11:08 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    char *big_str;
    char *little_str;
    size_t i;
    size_t j;
    
    big_str = (char *)big;
    little_str = (char *)little;
    i = 0;
    
    if(!little_str)
        return (big_str);
    
    if(!big_str)
        return (NULL);

    while(big_str && little_str && i < len)
    {
        j = 0;
        if(big_str[i] == little_str[0])
        {
            while(big_str[i + j] == little_str[j] && (i + j) < len)
            {
                if(!little_str[j + 1])
                    return (big_str + i);
                j++;
            }
        }
        i++;
    }
    return (NULL);
}
 
/*int main()
{
    char *ptr;

    ptr = ft_strnstr("lorem ipsum dolor sit amet", "o", 10);
    printf("%s", ptr);
}*/