/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:43:08 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/17 19:03:25 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t r;
    char *s;
    size_t len_dst;
    size_t len_src; 
        
    i = 0;
    r = 0;
    s = (char *)src;
    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);

    if(!dst || !src)
        return (0);
    if(size > len_dst)
            r = len_dst + len_src;
    else
        r = len_src + size;

    while(s[i] && (len_dst + 1) < size)
    {
        dst[len_dst] = s[i];
        len_dst++;
        i++;
    }
    dst[len_dst] = '\0';
    return (r);
}

/*int main()
{
    char dst[] = "rrrrrrrrrrrrrrr";
    char src[] = "lorem ipsum dolor sit amet";
    int size;

    size = 18;

    puts(dst);
    printf("%ld\n", ft_strlcat(dst, src, size));
    puts(dst);
    //strlcat(dst, src, size);
}*/


/* void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int main()
{
    char *dest;
    ft_memset(dest, 'r', 15);
    ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
    write(1, "\n", 1);
    write(1, dest, 15);
	
} */