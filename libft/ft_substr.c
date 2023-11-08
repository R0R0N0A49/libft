/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:58:37 by trebours          #+#    #+#             */
/*   Updated: 2023/11/02 15:58:39 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*rsl;
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		rsl = ft_calloc(1, sizeof(char));
		if (rsl == 0)
			return (0);
	}
	else
	{
		rsl = ft_calloc((len + 1), sizeof(char));
		if (rsl == 0)
			return (0);
		while (len > i && s[start])
		{
			rsl[i] = s[start + i];
			i++;
		}
	}
	return (rsl);
}
