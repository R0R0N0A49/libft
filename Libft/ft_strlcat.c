/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:32:37 by trebours          #+#    #+#             */
/*   Updated: 2023/11/02 14:48:19 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	j;
	size_t	i;
	size_t	k;

	j = ft_strlen(dest);
	i = 0;
	k = ft_strlen(src) + n;
	if (n != 0)
	{
		if (k >= ft_strlen(src) + j)
			k = (k - n) + j;
		while (j + i < (n - 1) && src[i])
		{
			dest[j + i] = src[i];
			i++;
		}
		if (n > j)
			dest[j + i] = '\0';
	}
	return (k);
}
