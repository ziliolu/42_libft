/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:34:08 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/17 22:37:27 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	if (!s || fd < 0)
		return ;
	write(fd, s, len);
	write(1, "\n", 2);
}

/*int main()
{
    ft_putendl_fd("42porto", 1);
}*/