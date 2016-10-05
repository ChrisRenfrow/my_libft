/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 18:05:01 by crenfrow          #+#    #+#             */
/*   Updated: 2016/10/02 22:39:24 by crenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_cmp;
	unsigned char	*s2_cmp;
	int				i;

	s1_cmp = (unsigned char *)s1;
	s2_cmp = (unsigned char *)s2;
	i = 0;
	while ((s1_cmp[i] || s2_cmp[i]) && i < (int)n)
	{
		if (s1_cmp[i] - s2_cmp[i])
			return (s1_cmp[i] - s2_cmp[i]);
		i++;
	}
	return (0);
}
