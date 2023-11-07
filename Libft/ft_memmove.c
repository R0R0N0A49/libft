/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:02:02 by trebours          #+#    #+#             */
/*   Updated: 2023/11/04 16:52:10 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest1;
	const char	*src2;

	i = 0;
	dest1 = dest;
	src2 = src;
	if (dest1 > src2)
	{
		while (n != 0)
		{
			dest1[n - 1] = src2[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n && src2[i])
		{
			dest1[i] = src2[i];
			i++;
		}
	}
	return (dest);
}
