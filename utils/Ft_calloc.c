/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:16:12 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:02:12 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

static void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*p;
	unsigned char	v;
	size_t			i;

	p = (unsigned char *) ptr;
	v = (unsigned char) value;
	i = 0;
	while (i < len)
	{
		p[i] = v;
		i ++;
	}
	return (ptr);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > ((size_t) - 1) / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}
