/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctwrd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 11:14:44 by crenfrow          #+#    #+#             */
/*   Updated: 2016/10/18 17:25:06 by crenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ctwrd(const char *s, char c)
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
