/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 23:29:52 by crenfrow          #+#    #+#             */
/*   Updated: 2016/10/04 23:01:19 by crenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list **ptr;
	t_list *frsh;
	if (!frsh)
		return (NULL);
	frsh = f(lst);
	if (lst->next)
	{
		ptr = &frsh;
		ft_lstadd(ptr, frsh);
		frsh = frsh->next;
		lst = lst->next;
	}
	return (frsh);
}
