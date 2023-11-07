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
#include <stdio.h>

static int	ft_count(char const *s, char c)
{
	int	j;
	int	i;

	i = 0;
	j = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
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

static char	*ft_strdup_mod(const char *s, char chr)
{
	char	*rsl;
	int		len_s;
	int		i;

	i = 0;
	len_s = ft_strlen((char *)s);
	rsl = (char *)malloc((len_s + 1) * sizeof(char));
	if (rsl == 0)
		return (0);
	while (s[i] && !ft_separator(s[i], chr))
	{
		rsl[i] = s[i];
		i++;
	}
	rsl[i] = '\0';
	return (rsl);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc((ft_count(s, c) + 1) * sizeof(char *));
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
	if (!s[i])
		tab[j] = 0;
	return (tab);
}
