/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 17:23:19 by crenfrow          #+#    #+#             */
/*   Updated: 2016/10/02 22:58:18 by crenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ct_del(const char *s, char c)
{
	int i;
	int count;
	int has_word;

	i = 0;
	count = 0;
	while (s[i])
	{
		has_word = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			has_word = 1;
			i++;
		}
		while (s[i] == c)
			i++;
		if (has_word)
			count++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		ct;
	int		i;
	int		j;

	ct = ct_del(s, c);
	i = 0;
	j = 0;
	res = (char **)ft_memalloc(sizeof(char *) * (ct + 1));
	if (!res)
		return (NULL);
	while (j < ct && *s)
	{
		while (*s == c && *s)
			s++;
		while (s[i] != c && s[i])
			i++;
		res[j] = ft_strsub(s, 0, i);
		s += i;
		i = 0;
		j++;
	}
	return (res);
}
