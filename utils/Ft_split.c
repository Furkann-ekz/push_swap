/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:14:50 by fekiz             #+#    #+#             */
/*   Updated: 2025/11/19 14:02:14 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_swap.h"

static size_t	i_len(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_strdup(const char *str)
{
	int		i;
	char	*str2;

	str2 = (char *)ft_calloc((ft_strlen(str) + 1), sizeof(char));
	i = 0;
	if (!str2)
		return (NULL);
	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len || s_len == 0 || len == 0)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	p = (char *)ft_calloc((len + 1), sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	size_t		start;
	size_t		end;
	size_t		str_i;
	char		**str;

	start = 0;
	str_i = 0;
	str = (char **)ft_calloc((i_len((char *)s, c) + 1), sizeof(char *));
	if (!str)
		return (NULL);
	while (s[start])
	{
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		if (str_i == i_len(s, c))
			break ;
		str[str_i++] = ft_substr(s, start, end - start);
		start = end;
	}
	str[str_i] = 0;
	return (str);
}
