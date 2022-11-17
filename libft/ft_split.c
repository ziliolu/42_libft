/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:49:02 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/15 20:15:49 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char *str, char c)
{
    int n;
    int i;

    n = 0;
    i = 0;
    while(str[i])
    {
        while(str[i] == c)
            i++;
        if(str[i])
        {
            while(str[i] && str[i] != c)
                i++;
            n++;
        }
    }
    return(n);   
}

int count_word_len(char *str, int c, int i)
{
    int letter;

    letter = 0;
    while(str[i] && str[i] != c)
    {
        letter++;
        i++;
    }
    return letter;   
}

char **ft_split(char const *s, char c)
{
    char **split_tab;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    
    split_tab = (char **)malloc(count_words((char *)s, c) + 1 * sizeof(char *));
    
    if(!split_tab)
        return (NULL);

    while(s[i])
    {
        k = 0;
        while(s[i] == c)
            i++;
        
        if(s[i])
        {
            split_tab[j] = (char *)malloc((count_word_len((char *)s, c, i) + 1) * sizeof(char));
            
            if(!split_tab)
                return (NULL);

            while(s[i] && s[i] != c)
            {
                split_tab[j][k] = s[i];
                i++;
                k++;
            }
            
            split_tab[j][k] = '\0';
            j++;
        }
    }
    split_tab[j] = NULL;
    return(split_tab);
}

//talvez necessario fazer o free do array interno caso nao consiga alocar memoria
/*int main()
{
    char **tab;
    int i;
    
    tab = ft_split("hello    world 42school ", ' ');
    i = 0;
    
    while(tab[i])
    {
        printf("tab[%d] = %s\n", i, tab[i]);
        i++;
    }
    return(0);
}*/