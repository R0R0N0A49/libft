/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:06:25 by trebours          #+#    #+#             */
/*   Updated: 2023/11/04 14:52:05 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int		j;
	int		i;

	if (!s)
		return (0);
	i = 0;
	if (s[i] == c)
	{
		j = 0;
		i++;
	}
	else
		j = 1;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			j++;
		i++;
	}
	return (j);
}

static int	ft_separator(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

size_t	ft_lenword(const char *s, char chr)
{
	size_t	i;

	i = 0;
	while (s[i] != chr && s[i])
		i++;
	return (i);
}

static char	*ft_strdup_mod(const char *s, char chr)
{
	char	*rsl;
	size_t	len_s;
	int		i;

	i = 0;
	len_s = ft_lenword(s, chr);
	rsl = (char *)ft_calloc((len_s + 1), sizeof(char));
	if (rsl == 0)
		return (0);
	while (s[i] && !ft_separator(s[i], chr))
	{
		rsl[i] = s[i];
		i++;
	}
	return (rsl);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	tab = ft_calloc((ft_count(s, c) + 1), sizeof(char *));
	if (!tab)
		return (0);
	while (s[i])
	{
		if (s[i] && ft_separator(s[i], c))
			i++;
		if (s[i] && !ft_separator(s[i], c))
		{
			tab[j] = ft_strdup_mod(&s[i], c);
			j++;
			while (s[i] && !ft_separator(s[i], c))
				i++;
		}
	}
	return (tab);
}
