/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 17:20:35 by amarcell          #+#    #+#             */
/*   Updated: 2021/01/16 17:20:37 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	if (lst)
	{
		if (lst[0])
		{
			temp = *lst;
			temp = ft_lstlast(temp);
			temp->next = new;
		}
		else
			lst[0] = new;
	}
}
