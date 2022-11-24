/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:23:00 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/23 10:52:08 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a substring
** from the string ’s’. The substring begins at index
** ’start’ and is of maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result_str;

	i = 0;
	j = 0;
	result_str = malloc(sizeof(char) * (len + 1));
	if (!result_str || !s)
		return (NULL);
	while (s[i])
	{
		while (i >= start && j < len)
		{
			result_str[j] = s[i];
			j++;
			i++;
		}
		i++;
	}
	result_str[j] = '\0';
	return (result_str);
}

/* int main()
{
    char *s = "lorem ipsum dolor sit amet";
    unsigned int start = 0;
    size_t len = 5;

    char *substr = (ft_substr(s, start, len));
    puts(substr);
} */