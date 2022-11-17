/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:23:00 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/15 20:49:57 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *substr;
    
    i = 0;
    substr = (char *)malloc(len * sizeof(char));

    if(!substr)
        return (0);
        
    while(i < len)
    {
        substr[i] = s[start];
        i++;
        start++; 
    }
    return (substr);
}

/*int main()
{
    char *s = "42schooooooool";
    unsigned int start = 2;
    size_t len = 6;

    char *substr = (ft_substr(s, start, len));
    puts(substr);
}*/