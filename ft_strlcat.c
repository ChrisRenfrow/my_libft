/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:00:30 by crenfrow          #+#    #+#             */
/*   Updated: 2016/10/04 22:36:14 by crenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_sz;
	int		i;
	int		j;

	dst_sz = ft_strlen(dst);
	i = 0;
	j = 0;
	if (size > 0 && size > dst_sz)
	{
		while (dst[i] && i <= (int)size)
			i++;
		while (src[j] && i < (int)size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = 0;
		return (dst_sz + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
