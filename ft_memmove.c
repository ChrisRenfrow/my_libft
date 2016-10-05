/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 19:46:58 by crenfrow          #+#    #+#             */
/*   Updated: 2016/09/27 17:46:15 by crenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memrcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;
	int				i;

	dst_tmp = (unsigned char *)dst;
	src_tmp = (unsigned char *)src;
	i = n - 1;
	while (i >= 0)
	{
		dst_tmp[i] = src_tmp[i];
		i--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == src)
		return (dst);
	else if (dst < src)
		ft_memcpy(dst, src, len);
	else
		ft_memrcpy(dst, src, len);
	return (dst);
}
