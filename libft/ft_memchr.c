/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:37:26 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/17 22:30:35 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)s == c)
			return ((char *)s);
		s++;
		i++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

/*int main()
{
	printf("FAKE: %s\n", ((char *) ft_memchr("hello", 'l', 2)));
	printf("ORIGINAL: %s\n", ((char *) memchr("hello", 'l', 2)));
}*/
