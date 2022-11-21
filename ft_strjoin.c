/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:40:09 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/15 20:15:26 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *new_str;
    int len;

    i = 0;
    j = 0;
    
    while(s1[i])
        i++;
    while(s2[j])
        j++;
    len = (i + j);
    new_str = (char *)malloc(len * sizeof(char));

    if(!new_str)
        return (0);

    i = 0;
    j = 0;
    while(s1[i])
    {
        new_str[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        new_str[i] = s2[j];
        i++;
        j++;
    }
    return(new_str);         
}

/*int main()
{
    char *s1 = "123";
    char *s2 = "abc";
    char *new_str = ft_strjoin(s1, s2);
    puts(new_str);
}*/

