/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ft_atoi_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:48:57 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/08 15:01:02 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	count;

	i = 0;
	sign = 1;
	count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		count = (str[i] - 48) + (10 * count);
		i++;
	}
	return (count * sign);
}

static int	ft_count(int c)
{
	int		count;
	long	num;

	num = c;
	count = 0;
	if (c == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		count++;
	}
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		digit;
	long	nbr;
	char	*str;

	nbr = n;
	digit = ft_count(nbr);
	str = malloc(digit + 1);
	if (!str)
		return (NULL);
	str[digit--] = '\0';
	if (nbr == 0)
		str[digit] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[digit--] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	return (str);
}
