/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenfrow <crenfrow@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 04:39:36 by crenfrow          #+#    #+#             */
/*   Updated: 2016/12/07 04:39:50 by crenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlchr(char *str, int c)
{
	int		l;

	l = 0;
	while (str[l] != 0 && str[l] != c)
		l++;
	return (l);
}
