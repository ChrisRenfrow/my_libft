/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:24:51 by crenfrow          #+#    #+#             */
/*   Updated: 2016/10/05 13:56:28 by crenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = strlen(s);
	while (i > -1)
	{
		if (s[i] == c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		i--;
	}
	return (NULL);
}
