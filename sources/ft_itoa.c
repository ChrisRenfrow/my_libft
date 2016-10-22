/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 17:25:32 by crenfrow          #+#    #+#             */
/*   Updated: 2016/10/18 18:50:38 by crenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_diglen(int nb)
{
	int	len;

	if (nb < 0)
		len = 1;
	else
		len = 0;
	while (nb > 10 || nb < -10)
	{
		nb /= 10;
		len++;
	}
	return (len + 1);
}

char	*ft_strrev(char *str)
{
	char	*tmp;
	int		len;
	int		i;
	int		j;

	len = ft_strlen(str);
	tmp = ft_strnew(len);
	i = 0;
	j = len - 1;
	while (i < len)
	{
		tmp[i] = str[j - i];
		i++;
	}
	return (tmp);
}

char	*ft_itoa(int nb)
{
	char	*res;
	int		i;
	int		is_neg;
	int		rem;
	long	nbl;

	nbl = (long)nb;
	res = ft_strnew(ft_diglen(nb));
	i = 0;
	is_neg = 0;
	if (!res)
		return (NULL);
	res[i] = '0';
	if (nbl == 0)
		return (res);
	is_neg = (nbl < 0) ? 1 : 0;
	nbl = (nbl < 0) ? -nbl : nbl;
	while (nbl != 0)
	{
		rem = nbl % 10;
		res[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		nbl = nbl / 10;
	}
	res[i] = is_neg ? '-' : res[i];
	return (res = ft_strrev(res));
}
