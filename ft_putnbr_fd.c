/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:39:15 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/17 22:39:20 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digits(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
	{
		n *= -1;
		digits++;
	}
	while (n > 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, ft_itoa(n), ft_count_digits(n));
}

/*int main()
{
    ft_putnbr_fd(12, 1);
}*/