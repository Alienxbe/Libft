/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:05:10 by mykman            #+#    #+#             */
/*   Updated: 2021/10/12 22:24:39 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd(t_dlist **new, t_dlist **previous, t_dlist **next)
{
	if (!new || !previous || !next || !*next)
		return ;
	new->previous = previous;
	new->next = next;
	if (previous)
		previous->next = new;
	if (next)
		next->previous = new;
}