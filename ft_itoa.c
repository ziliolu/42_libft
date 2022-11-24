/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicoli- < lpicoli-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:52:59 by lpicoli-          #+#    #+#             */
/*   Updated: 2022/11/23 07:35:05 by lpicoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(long n)
{
	int	digits;

	digits = 0;
	if (n <= 0)
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
	size_t		i;
	char		*str;

	i = ft_count_digits(n);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == -2147483648)
		str = "-2147483648";
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		str[0] = '0';
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

    n = -2147483648;
    printf("Decimal number: %d, string convertion: %s\n", n, ft_itoa(n));
}*/
