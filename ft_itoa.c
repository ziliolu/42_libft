/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:52:59 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/17 22:28:53 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
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

char	*ft_itoa(int n)
{
	long	nb;
	int		i;
	char	*str;

	nb = n;
	i = ft_count_digits(nb);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		i--;
		n /= 10;
	}
	return (str);
}

/*int main()
{
    int n;

    n = +2045;
    printf("Decimal number: %d, string convertion: %s\n", n, ft_itoa(n));
}*/